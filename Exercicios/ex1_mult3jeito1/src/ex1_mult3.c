#include <stdio.h>
#include <stdlib.h>

void mostrarParesMultiplos3(){
    //jeito 1
    for(int i = 2; i <= 1000; i += 2){
        //de 2 em 2
        if(i % 3 == 0){
            printf("%d ", i);
        }
    }
}

int main() {
    mostrarParesMultiplos3();
    return 0;
}
