#include <stdio.h>


/*
Uma empresa pretende desenvolver um ar condicionado que irá ligar automaticamente. O ar condicionado irá ligar se a temperatura externa atingir mais que 30 graus OU menos que 10 graus. 
Faça um algoritmo para recebe a temperatura atual e apresente na tela se o ar condicionado irá ou não ligar.
*/

int main(){
    float temperatura;

    printf("Digite a temperatura externa: ");
    scanf("%f", &temperatura);

    if(temperatura > 30 || temperatura < 10){
        printf("AR CONDICIONADO IRA LIGAR");
    }else{
        printf("AR CONDICIONADO NAO IRA LIGAR");
    }

    return 0;
}
