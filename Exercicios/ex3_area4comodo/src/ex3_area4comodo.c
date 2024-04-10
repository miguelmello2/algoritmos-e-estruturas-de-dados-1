#include <stdio.h>

void calcularAreaDosComodos(){
    double largura, comprimento, area, areaTotal = 0;

    for(int i = 1; i <= 4; i++){
        printf("Digite a largura do comodo %d: ", i);
        scanf("%lf", &largura);

        printf("Digite o comprimento do comodo %d: ", i);
        scanf("%lf", &comprimento);

        area = largura * comprimento;

        areaTotal += area;

        printf("A area do comodo %d é: %.2lf metros quadrados\n", i, area);
    }

    printf("A area total é: %.2lf metros quadrados\n", areaTotal);
}

int main() {
    calcularAreaDosComodos();
    return 0;
}
