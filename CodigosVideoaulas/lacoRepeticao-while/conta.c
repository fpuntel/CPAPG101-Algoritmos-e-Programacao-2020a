#include <stdio.h>

int main(){
    float saldo, valor;
    int opc = 0;

    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldo);

    while(opc != 4){
        printf("Bem vindo ao banco\n");
        printf("1 - Sacar \n");
        printf("2 - Depositar \n");
        printf("3 - Saldo\n");
        printf("4 - Sair\n");
        printf("Opcao?");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                printf("Valor que deseja sacar: ");
                scanf("%f", &valor);

                if(saldo < valor){
                    printf("Valor insuficiente na conta para sacar\n");
                }else{
                    saldo = saldo - valor;
                }
                break;
            case 2:
                printf("Valor que deseja depositar: ");
                scanf("%f", &valor);

                saldo = saldo + valor;

                break;
            case 3:
                printf("Saldo da conta: %f\n", saldo);
                break;
            case 4:
                printf("Até mais\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }
    return 0;
}
