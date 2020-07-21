#include <stdio.h>

int main(){
    int i, sequencia;
    int resultado, anterior, anterior2;

    printf("Digite quantos numeros vc quer da sequencia de fibonacci: ");
    scanf("%d", &sequencia);

    anterior = 1;
    anterior2 = 1;
    printf("1 - %d\n", anterior);
    printf("2 - %d\n", anterior2);
    for(i = 3; i <= sequencia; i++){
        // resultado: 2 3 5
        // anterior:  1 2 3
        // anterior2: 1 2 3 5

        resultado = anterior + anterior2;
        anterior = anterior2;
        anterior2 = resultado;

        printf("%d - %d \n", i, resultado);
    }

    return 0;
}
