#include <stdio.h>

int main(){
    int numero, qtdDez = 0;

    // Enquanto nao for zero
    // == igual
    // != diferente
    while(numero != 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero == 10){
            qtdDez++;
        }
    }

    printf("\n\n TOTAL DE VEZES QUE FOI DIGITADO 10: %d\n", qtdDez);

    return 0;
}
