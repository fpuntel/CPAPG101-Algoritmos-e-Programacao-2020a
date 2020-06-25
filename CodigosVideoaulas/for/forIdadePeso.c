#include <stdio.h>

int main(){
    int idade, qtdPesoAcimaNoventa = 0, i;
    float peso,  mediaIdade = 0;

    for(i = 0; i < 7; i++){
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o peso: ");
        scanf("%f", &peso);

        if(peso > 90){
            qtdPesoAcimaNoventa++;
        }
        // mediaIdade = 0
        // mediaIdade = 0 + 10
        // mediaIdade = 10 + 20
        mediaIdade = mediaIdade + idade;
    }

    mediaIdade = mediaIdade / 7;

    printf("Pessoas com mais de 90kg: %d\n", qtdPesoAcimaNoventa);
    printf("Media de idade: %f\n", mediaIdade);


    return 0;
}
