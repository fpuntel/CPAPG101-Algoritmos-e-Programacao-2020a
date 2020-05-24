#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // TESTE
    // 15
    // 22

    if(idade >= 18 && idade < 70){
        printf("OBRIGADO A VOTAR\n");
    }else{
        printf("VOTO FACULTATIVO");
    }

    return 0;
}
