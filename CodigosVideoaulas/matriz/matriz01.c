#include <stdio.h>

int main(){
    int m[3][3]; // 0 - 2
    int linha, coluna;

    // 0 - 0   0 - 1   0 - 2
    // 1 - 0   1 - 1   1 - 2
    // 2 - 0   2 - 1   2 - 2

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("[%d][%d] = ", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d  ", m[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
