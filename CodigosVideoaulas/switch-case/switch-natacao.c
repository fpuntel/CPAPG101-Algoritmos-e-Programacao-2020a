#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade do nadador:");
    scanf("%d", &idade);

    switch(idade){
        case 0 ... 5:
            printf("Categoria pré-mirim");
            break;
        case 6 ... 10:
            printf("Categoria mirim");
            break;
        case 11 ... 16:
            printf("Categoria infantil");
            break;
        case 17 ... 20:
            printf("Categoria jovem");
            break;
        case 21 ... 60:
            printf("Categoria adulto");
            break;
        default:
            printf("Idade não aceita para o grupo de natação!!!\n");
    }
    return 0;
}
