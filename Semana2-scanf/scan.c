#include <stdio.h>

int main(){

    int idade;
    float peso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Idade lida: %d \n", idade);
    printf("Peso lido: %f \n", peso);

    return 0;
}
