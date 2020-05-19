#include <stdio.h>

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
