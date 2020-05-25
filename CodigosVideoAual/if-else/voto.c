#include <stdio.h>

/*
Queremos verificar se a pessoa é obrigada a votar ou não. Sabemos que por lei, pessoas com idade igual ou maior que 18 anos e menor que 70 são obrigadas a votar.
*/

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade < 70){
        printf("OBRIGADO A VOTAR\n");
    }else{
        printf("VOTO FACULTATIVO");
    }

    return 0;
}
