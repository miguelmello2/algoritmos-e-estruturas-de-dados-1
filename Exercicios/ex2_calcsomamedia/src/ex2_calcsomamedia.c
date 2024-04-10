#include <stdio.h>
#include <stdlib.h>

void calcularSomaMedia(){
    int numero = 0;
    int soma = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &numero);
        soma += numero; // soma = soma + numero;
    }
    double media = (double)soma / 10;

    printf("A soma é: %d\n", soma);

    printf("A media é: %.2lf\n", media);
}

int main() {
    calcularSomaMedia();
    return 0;
}
