#include <stdio.h>


int main(){
    float nota1, nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua media final eh: %f\n", media);

    return 0;
}
