#include <stdio.h>

int main(){
    int opcao = 5;

    switch(opcao){
        case 1:
            printf("1");
            break;
        case 2 ... 5: // 2 - 3 - 4 - 5
            printf("2 - 5");
            break;
        case 4 ... 7: // 5 - 6 - 7
            printf("5 - 7");
            break;
    }

    return 0;
}
