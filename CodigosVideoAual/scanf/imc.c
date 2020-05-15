#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu peso eh de %f, sua altura eh %f e seu IMC eh: %f", peso, altura, imc);

    return 0;
}
