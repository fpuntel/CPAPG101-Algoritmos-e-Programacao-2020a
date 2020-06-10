#include<stdio.h>

int main(){
    char sexo;
    float peso;

    printf("Sexo do judoca? (F - M)");
    scanf("%c", &sexo);

    printf("Peso do judoca?");
    scanf("%f", &peso);

    switch(sexo){
        case 'm':
        case 'M':
            if(peso < 60){
                printf("Categoria masculina ligeiro\n");
            }else if(peso < 63){
                printf("Categoria masculina meio-leve\n");
            }else if(peso < 73){
                printf("Categoria masculina leve\n");
            }
            break;
        case 'f':
        case 'F':
            if(peso < 48){
                printf("Categoria feminina ligeiro\n");
            }else if(peso < 52){
                printf("Categoria feminina meio-leve\n");
            }else if(peso < 57){
                printf("Categoria feminina leve\n");
            }
            break;
    }
    return 0;
}
