#include <stdio.h>

int main(){
    int matriz[4][4], l, c;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            printf("[%d][%d] = ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    printf("\n\n\n DIAGONAL PRINCIPAL \n");
    // Diagonal principal
    for(l = 0; l < 4; l++){
        printf("[%d][%d] = %d\n", l, l, matriz[l][l]);
    }

    // 2 3 5
    // 5 1 8
    // 6 8 7

    printf("\n\n\n DIAGONAL SECUNDARIA \n");
    // Diagonal secundária
    c = 3;
    for(l = 0; l < 4;  l++){
        printf("[%d][%d] = %d\n", l, c, matriz[l][c]);
        c--; // c = c - 1
    }

    return 0;
}
