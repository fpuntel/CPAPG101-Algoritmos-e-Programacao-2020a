#include <stdio.h>

int main(){
    float lado, area, perimetro;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    // Calculos
    area = lado * lado;

    perimetro = lado + lado + lado + lado;

    printf("RESULTADOS: \n");
    printf("Area do quadrado: %f\n", area);
    printf("Perimetro do quadrado: %f\n", perimetro);


    return 0;
}
