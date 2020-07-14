#include <stdio.h>

int main(){
    int valores[5];
    int maior, menor, i;

    for(i = 0; i < 5; i++){
        printf("[%d] = ", i);
        scanf("%d", &valores[i]);
    }

    maior = 0;
    menor = 0;
    for(i = 1; i < 5; i++){
        // valores[1] > valores[0]
        if(valores[i] > valores[maior]){
            maior = i;
        }

        if(valores[i] < valores[menor]){
            menor = i;
        }
    }

    printf("Pos do maior: %d\n", maior);
    printf("Pos do menor: %d\n", menor);

    return 0;
}
