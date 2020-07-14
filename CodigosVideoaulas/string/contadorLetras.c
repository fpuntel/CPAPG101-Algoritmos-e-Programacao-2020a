#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    int qtdLetras;

    printf("Digite uma palavra:");
    scanf("%s", &nome);

    // while até que a pos do nome fosse = /0

    // strlen
    qtdLetras = strlen(nome);

    printf("TOTAL DE LETRAS: %i", qtdLetras);


    return 0;
}
