#include <stdio.h>

int main(){
    int opcao;
    float numero1, numero2, resultado;

    do{
        printf("1 - Somar dois valores \n");
        printf("2 - Subtrair dois valores\n");
        printf("3 - Sair\n");
        printf("Opcao? ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o primeiro valor: ");
                scanf("%f", &numero1);
                printf("Digite o segundo valor: ");
                scanf("%f", &numero2);

                resultado = numero1 + numero2;

                printf("Resultado da soma: %f\n", resultado);
                break;
            case 2:
                printf("Digite o primeiro valor: ");
                scanf("%f", &numero1);
                printf("Digite o segundo valor: ");
                scanf("%f", &numero2);

                resultado = numero1 - numero2;

                printf("Resultado da subtracao: %f\n", resultado);
                break;
            case 3:
                printf("Ate mais\n");
                break;
            default:
                printf("Opcao invalida\n");
        }


    }while(opcao != 3);

    return 0;
}
