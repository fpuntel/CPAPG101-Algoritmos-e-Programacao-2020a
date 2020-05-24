#include <stdio.h>
/*
Faça um algoritmo que para calcular um aumento de salário para um determinado funcionário.
- Se o salário for menor ou igual a R$2000,00 o funcionário receberá um aumento de R$400,00.
- Se o salário for maior que R$2000,00 o funcionário receberá um aumento de R$200,00.
Ao final apresente o salário antigo e o novo salário.
*/

int main(){
    float salario, salarioNovo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if(salario <= 2000){
        salarioNovo = salario + 400;
    }else{
        salarioNovo = salario + 200;
    }

    printf("Salario antigo: %f\n", salario);
    printf("Novo salario: %f\n", salarioNovo);


    return 0;
}
