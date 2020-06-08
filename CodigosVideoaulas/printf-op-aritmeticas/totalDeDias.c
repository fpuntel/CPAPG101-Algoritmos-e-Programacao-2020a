#include <stdio.h>

/*
Faça um programa na linguagem C que calcule quantos dias de vida uma pessoa possui. Considere apenas anos que possuem 365 dias.   
Ao final do cálculo apresente na tela o total de dias utilizando o comando printf();
O total de dias deve aparecer no meio da mensagem apresentada na tela, exemplo:
A pessoa viveu 365 dias

*/

int main(){
    int anoDeNascimento, idade, diasVivido;

    // Calculos
    anoDeNascimento = 2019;

    idade = 2020 - anoDeNascimento;

    diasVivido = idade * 365;

    // Impressao

    printf("A pessoa viveu %d dias.", diasVivido);


    return 0;
}
