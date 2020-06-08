#include <stdio.h>

int main(){
    float n1, n2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("MENU\n1 - Diferença entre os dois numeros \n");
    printf("2 - Média entre os valores digitados \n");
    printf("3 - Divisão do primeiro pelo segundo \n");
    printf("4 - Divisão do segundo pelo primerio \n");
    printf("Opcao? ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            resultado = n1 - n2;
            printf("Diferenca entre n1 e n2: %f", resultado);
            break;
        case 2:
            resultado = (n1 + n2) / 2;
            printf("Media: %f\n", resultado);
            break;
        case 3:
            resultado = n1 / n2;
            printf("%f / %f = %f", n1, n2, resultado);
            break;
        case 4:
            resultado = n2 / n1;
            printf("%f / %f = %f", n2, n1, resultado);
            break;
        default:
            printf("Opcao invalida!!!\n");
    }

    return 0;
}
