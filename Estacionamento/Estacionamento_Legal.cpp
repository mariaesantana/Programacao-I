/*Este programa calcula o valor aproximado que o cliente irá pagar no estacionamento de acordo com as horas informadas*/

#include <stdio.h>
#define PRIMEIRA_HORA 15
#define HORA_ADICIONAL 6
#define MAIS_OITO_HORAS 50
#define TAM_NOME 50

int main (void){
	
	char nome_cliente[TAM_NOME];
	int horas;
	float valor;
	
	printf("Qual o seu nome?");
	fgets(nome_cliente, TAM_NOME, stdin);
	
	printf("Quantas horas o carro ficou no estacionamento?");
	scanf("%d", &horas);
	
	
	if (horas <= 1){
		valor = PRIMEIRA_HORA;
	} else if(horas > 8){
		valor = MAIS_OITO_HORAS;
	} else {
		valor = PRIMEIRA_HORA + (horas - 1 ) * HORA_ADICIONAL;
	}
	
	printf("\n Cliente: %s \n Valor: %.2f", nome_cliente, valor);
	return 0;
}

