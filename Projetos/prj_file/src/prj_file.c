#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//abre o arquivo para escrita
	FILE *arquivo = fopen("exemplo.txt", "w");

	//verifica se o arquivo foi aberto com sucesso para escrita
	if (arquivo != NULL) {
		//escreve o texto no arquivo
		fprintf(arquivo, "Hello, World\n");

		//fecha o arquivo de escrita
		fclose(arquivo);
		printf("Texto gravado com sucesso.\n");
	} else {
		//se houver erro na arbetura do arquivo para escrita
		printf("Erro ao abrir o arquivo para escrita.\n");
		return 1; // retorna um codigo de erro
	}

	//abre o arquivo para leitura
	arquivo = fopen("exemplo.txt", "r");

	//verifica se o arquivo foi aberto com sucesso para leitura
	if (arquivo != NULL) {
		char linha[100]; //define um buffer para armazenar a linha lida

		//le e imprime cada linha do arquivo
		while (fgets(linha, sizeof(linha), arquivo) !=NULL){
				printf("Conteudo lido do arquivo: %s", linha);
		}


		//fecha o arquivo de leitura
		fclose(arquivo);
	} else {
		//se houver erro na arbetura do arquivo para leitura
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1; // retorna um codigo de erro
	}
	return 0;
}
