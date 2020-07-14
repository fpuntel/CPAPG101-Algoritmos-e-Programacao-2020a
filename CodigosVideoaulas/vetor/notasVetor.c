#include <stdio.h>

int main(){
    float notas[3], media = 0;
    int ind;
/*
    printf("Nota 1: ");
    scanf("%f", &notas[0]);

    printf("Nota 2: ");
    scanf("%f", &notas[1]);

    printf("Nota 3: ");
    scanf("%f", &notas[2]);

    printf("Notas: \n");
    printf("- %f \n", notas[0]);
    printf("- %f \n", notas[1]);
    printf("- %f \n", notas[2]);*/

    for(ind = 0; ind < 3; ind++){
        printf("Digite a nota para a pos %i: ", ind);
        scanf("%f", &notas[ind]);
    }

    printf("\n Notas: \n");
    for(ind = 0; ind < 3; ind++){
        printf("- %f \n", notas[ind]);
        media = media + notas[ind];
    }

    media = media / 3;
    printf("\n Media das notas: %f", media);


    return 0;
}
