#include <stdio.h>

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
