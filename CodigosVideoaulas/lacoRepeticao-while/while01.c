#include <stdio.h>

int main(){
    int indice;

    indice = 1;

    while(indice <= 10){
        printf("Valor do indice: %d\n", indice);
        indice++; // indice = indice + 1
    }
    printf("Valor do indice depois do while: %d\n", indice);

    return 0;
}
