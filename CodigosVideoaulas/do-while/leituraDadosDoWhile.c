#include <stdio.h>

/*
Faça um algoritmo que leia vários números inteiros até que o usuário digite 0.
Ao final apresente a soma de todos os valores digitados.
*/

int main(){
    int numero, soma = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }while(numero != 0);

    printf("SOMA DOS NUMEROS DIGITADOS: %d", soma);

    return 0;
}
