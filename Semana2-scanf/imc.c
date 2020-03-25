#include <stdio.h>

int main(){
    // declaracao
    float peso, altura, imc;

    // definicao das variaveis
    peso = 70.5;
    altura = 1.79;

    // calculo do imc
    imc = peso / (altura * altura);

    // apresentar
    printf("Seu peso eh de %f, sua altura eh %f e seu IMC eh: %f\n", peso, altura, imc);

    return 0;
}
