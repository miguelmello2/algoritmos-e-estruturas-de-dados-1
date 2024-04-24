#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // exemplo de declaraçao e inicializaçao de um array de inteiros
    int numeros[5] = { 1, 2, 3, 4, 5 };
    // exemplo de declaraçao e inicalizaçao de um array de strings
    char clubes[][30] = {"\nAtletico Mineiro\n", "Vasco\n", "Real Madrid\n"};

    //loop for para percorrer o array e imprimir seus elementos
    printf("Elemntos do array de inteiros:");
    for (int i = 0; i < 5; i++){
    	printf("%d", numeros [i]);
    }

    //loop for para percorrer o array de strings e imprimir os nomes dos clubes
    printf("\nNomes dos clubes: ");
    for (int i = 0; i < 3; i++) {
    	printf("%s", clubes[i]);
    }

    return 0;
}
