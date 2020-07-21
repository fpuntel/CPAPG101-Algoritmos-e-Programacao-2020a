#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], nome2[30];
    int igualdade;

    //printf("Digite o primeiro nome: ");
    //scanf("%s", &nome);

    printf("Digite o segundo nome: ");
    scanf("%s", &nome2);

    // strupr(nome);
    //igualdade = strcmp(nome, nome2);

    // nome2 = nome
    //strcpy(nome2, "asdasd");

    // nome2 = 'FER'
    // nome = 'NANDO'
    // nome2 = FERNANDO
    strcat(nome2, "nando");


    printf("Concatenar: %s", nome2);

    return 0;
}
