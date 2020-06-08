#include <stdio.h>

/*
Um grupo de pesquisa pretende realizar um estudo com jogadores de basquete. Para participar do estudo o jogador deve ter as seguintes características: ter mais de 20 anos E ter mais de 1,95m de altura.
Faça um algoritmo que receba as informações necessárias e apresente na tela se o jogador poderá ou não participar do estudo.
*/

int main(){
    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(idade > 20 && altura > 1.95){
        printf("Poderá participar do estudo");
    }else{
        printf("Nao poderá participar do estudo");
    }


    return 0;
}
