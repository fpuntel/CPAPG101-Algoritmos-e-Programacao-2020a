#include <stdio.h>

int main(){
    float nota, acumuladoNotas = 0;
    int indice = 0;

    while(indice < 5){
        printf("Digite uma nota: ");
        scanf("%f", &nota);

        // Soma das notas
        acumuladoNotas = acumuladoNotas + nota;

        indice = indice + 1;
    }
    // Media das notas
    acumuladoNotas = acumuladoNotas / 5;

    printf("Media de notas: %.2f\n", acumuladoNotas);

    return 0;
}
