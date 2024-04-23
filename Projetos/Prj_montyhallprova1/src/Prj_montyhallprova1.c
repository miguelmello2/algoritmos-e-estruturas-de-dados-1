
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	printf("Bem-vindo ao jogo Monty Hall!");
	printf("\n\nEscolha uma porta (1, 2 ou 3): ");
	int portaEscolhida;
	scanf("%d", &portaEscolhida);

	if (portaEscolhida < 1 || portaEscolhida > 3) {
		printf("\nEscolha inválida. O número da porta deve ser 1, 2 ou 3.");
	} else {


		srand(time(NULL));

		int portaPremiada = rand() % 3 + 1;

		int portaVazia = -1;
		do {
			portaVazia = rand() % 3 + 1;
		} while (portaVazia == portaPremiada || portaVazia == portaEscolhida);
		printf("\nO apresentador abriu a porta %d, que está vazia.", portaVazia);

		printf("\n\nVocê deseja trocar para a outra porta? (s/n): ");
		char opcao;
		scanf(" %c", &opcao);

		int trocarPorta = (opcao == 's' || opcao == 'S');

		int portaEscolhidaOriginal = portaEscolhida;
		if (trocarPorta) {
			do {
				portaEscolhida = rand() % 3 + 1;
			} while (portaEscolhida == portaVazia
					|| portaEscolhida == portaEscolhidaOriginal);
			printf("\nVocê trocou para a porta %d.", portaEscolhida);
		}

		if (portaEscolhida == portaPremiada) {
			printf("\nVocê ganhou! Parabéns!");
		} else {
			printf("\nVocê perdeu. A porta premiada era a %d.", portaPremiada);
		}

		printf("\n\nPorta premiada: %d", portaPremiada);
		printf("\nPorta vazia: %d", portaVazia);
		printf("\nPorta escolhida: %d", portaEscolhida);
		printf("\nPorta escolhida Originalmente: %d", portaEscolhidaOriginal);
	}

	return EXIT_SUCCESS;
}
