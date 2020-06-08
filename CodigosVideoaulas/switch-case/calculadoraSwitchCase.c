#include <stdio.h>

int main(){
    float numero1, numero2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite a operacao desejada: \n");
    printf(" 1 - Soma\n 2 - Subtracao \n 3 - Divisao \n 4 - Multiplicacao\n");
    printf("Opcao?");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            resultado = numero1 + numero2;
            printf("%f + %f = %f\n", numero1, numero2, resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("%f - %f = %f\n", numero1, numero2, resultado);
            break;
        case 3:
            resultado = numero1 / numero2;
            printf("%f / %f = %f\n", numero1, numero2, resultado);
            break;
        case 4:
            resultado = numero1 * numero2;
            printf("%f x %f = %f\n", numero1, numero2, resultado);
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}
