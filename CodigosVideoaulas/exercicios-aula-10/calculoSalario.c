#include <stdio.h>

int main(){
    float salarioAntigo, salarioNovo;

    printf("DIGITE O SALARIO ATUAL: ");
    scanf("%f", &salarioAntigo);

    // Calculo do novo salario
    // salarioAntigo -  100
    //     x         -  120

    // salarioNovo = salarioAntigo * 1.2;

    salarioNovo = (salarioAntigo * 120) / 100;

    printf("SALARIO ANTIGO: %f\n", salarioAntigo);
    printf("NOVO SALARIO: %f\n", salarioNovo);

    return 0;
}
