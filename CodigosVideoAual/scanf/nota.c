#include <stdio.h>

int main(){
    float prova1, prova2, trabalho;
    float notaProvas, notaTrabalho, notaFinal;

    printf("NOTA DA PROVA 1: ");
    scanf("%f", &prova1);

    printf("NOTA PROVA 2: ");
    scanf("%f", &prova2);

    printf("NOTA TRABALHO: ");
    scanf("%f", &trabalho);

    // 1 = 100%
    // 0,7 = 70%
    // 0,3 = 30%
    notaProvas = ((prova1 + prova2) / 2) * 0.7;
    notaTrabalho = trabalho * 0.3;
    notaFinal = notaProvas + notaTrabalho;

    printf("MEDIA FINAL : %f\n", notaFinal);


    return 0;
}
