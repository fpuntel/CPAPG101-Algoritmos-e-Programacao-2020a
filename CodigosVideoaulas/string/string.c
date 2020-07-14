#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char nome[30];

    printf("Digite um valor:");
    scanf("%d", &i);




    printf("Digite o nome: ");
    // Sempre que quiserem ler somente uma palavra
    //scanf("%s", &nome);
    // fflush(stdin); - windows
    //gets(nome); - windows

    __fpurge(stdin);
    fgets(nome, 30, stdin); // - linux


    printf("Nome digitado: %s \n", nome);


    return 0;
}
