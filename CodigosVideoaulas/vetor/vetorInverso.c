#include <stdio.h>

int main(){
    int valores[6]; // pos 0 ate a 5
    int i;

    for(i = 0; i < 6 ; i++){ // 0 ... 5
        printf("Digite um valor para a pos %d: ", i);
        scanf("%d", &valores[i]);
    }

    for(i = 5; i >= 0; i--){ // 5 ... 0
        printf("[%d] = %d\n", i, valores[i]);
    }


    return 0;
}
