#include <stdio.h>

int main(){
    float prova1, prova2, prova3, trabalho1;
    float mediaProvas, mediaFinal;

    printf("NOTA DA PROVA1:");
    scanf("%f", &prova1);
    printf("NOTA DA PROVA2: ");
    scanf("%f", &prova2);
    printf("NOTA DA PROVA3: ");
    scanf("%f", &prova3);

    printf("NOTA DO TRABALHO: ");
    scanf("%f", &trabalho1);

    mediaProvas = (prova1 + prova2 + prova3) / 3;
    // Se mediaProvas = 10 fazendo * 0.8 = 8,0
    mediaFinal = (mediaProvas * 0.8) + (trabalho1 * 0.2);

    printf("NOTA FINAL: %f\n", mediaFinal);

    return 0;
}
