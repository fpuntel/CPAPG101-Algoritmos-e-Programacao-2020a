#include <stdio.h>

int main(){
    int numero1, numero2;
    int soma, diferenca;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    // Calculos
    soma = numero1 + numero2;
    diferenca = numero1 - numero2;

    printf("RESULTADOS: \n");
    printf("SOMA: %d\n", soma);
    printf("DIFERENCA: %d\n", diferenca);

    return 0;
}
