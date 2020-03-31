#include <stdio.h>

int main(){
    float pesoAtual, pesoMais15, pesoMenos20;

    // Leitura do peso
    printf("Digite o peso:");
    scanf("%f", &pesoAtual);

    // Processamento
    // engorda 15%
    pesoMais15 = (pesoAtual * 0.15) + pesoAtual;
    // Exemplo
    // peso da pessoa eh 100
    // primeiramente achamos os 15% que dará 15kg
    // depois somamos com o peso atual, que terá
    // como resultado 115kg
    printf("Peso depois de engordar 15%: %f\n", pesoMais15);

    // emagrece 20%
    pesoMenos20 = pesoAtual - (pesoAtual * 0.20);
    // Exemplo
    // peso da pessoa eh 100kg
    // primeiramente achamos os 20% que dará 20kg
    // depois subtraímos com o peso atual, que terá
    // como resultado 80kg
    printf("Peso depois de engordar 20%: %f\n", pesoMenos20);

    return 0;
}
