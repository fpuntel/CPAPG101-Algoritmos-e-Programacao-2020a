#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30];
    int qtdLetras, vogais = 0, consoantes = 0, i;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    qtdLetras = strlen(palavra);

    for(i = 0; i < qtdLetras; i++){
        switch(palavra[i]){
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                vogais++;
                break;
            default:
                consoantes++;
        }
    }

    printf("Total de vogais: %d\n", vogais);
    printf("Total de consoantes: %d\n", consoantes);

    return 0;
}
