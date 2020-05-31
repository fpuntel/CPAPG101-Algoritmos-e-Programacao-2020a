#include <stdio.h>

/*
Faça um algoritmo que leia dois salários e apresente quais dos dois é maior.
*/

int main(){
    float salario1, salario2;

    printf("Digite o primeiro salario:");
    scanf("%f", &salario1);

    printf("Digite o segundo salario:");
    scanf("%f", &salario2);

    if(salario1 > salario2){
        printf("Salario 1 eh maior");
    }else if(salario2 > salario1){
        printf("Salario 2 eh maior");
    }else{
        printf("Salarios sao iguais.");
    }

    return 0;
}
