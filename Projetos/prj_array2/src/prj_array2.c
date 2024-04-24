#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	//declaraçao de um array de strings para armazenar tres nomes
	char nomes[3][30]; //supondo nomes com ate 30 caracteres

	//solicitar ao usuario para inserir tres nomes
	for (int i = 0; i < 3; i++) {
		printf("Digite o %do nome: ", i + 1);
		scanf("%s", nomes[i]);
	}

	//imprimir os nomes na ordem inversa
	printf("\nNomes na ordem inversa:\n");
	for (int i = 2; i >= 0; i--) {
		printf("%s\n", nomes[i]);
	}

	//imprimir os nomes e seus comprimentos
	printf("\nNomes e comprimentos:\n");
	for (int i = 0; i < 3; i++) {
		printf("%s - Comprimento: %zu\n", nomes[i], strlen(nomes[i]));
		//%zu é um especificador de formato usado em linguagem C para imprimir valores do tipo size_t.
		//Ele é particularmente útil quando você está trabalhando com funções que retornam valores do tipo size_t,
		//como strlen, que retorna o comprimento de uma string.
	}

	return 0;
}
