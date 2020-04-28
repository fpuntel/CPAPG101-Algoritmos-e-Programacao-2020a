#include <stdio.h>

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
