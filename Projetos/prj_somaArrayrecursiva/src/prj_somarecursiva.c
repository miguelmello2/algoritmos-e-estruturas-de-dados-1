#include <stdio.h>
#include <stdlib.h>

//funçao recursiva para somar os elementos de um array
int somaArray(int arr[], int n) {
	//caso base: se o tamanho do array é o 0, retorna 0
	if (n <= 0)
		return 0;
	//caso recursivo: soma o ultimo elemento ao resultado da soma dos elementos restantes
	return arr[n-1] + somaArray(arr, n-1);
}
int main (void) {
	int arr[] = {1, 2, 3, 4, 5};
	int tamanho = sizeof(arr) / sizeof(arr[0]);
	int resultado = somaArray(arr, tamanho);
	printf("A soma dos elementos do array é %d\n", resultado);
	return 0;
}
