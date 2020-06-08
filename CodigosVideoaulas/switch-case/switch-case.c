#include <stdio.h>

int main(){
    int codigo;

    printf("Codigo do produto: ");
    scanf("%d", &codigo);

    switch(codigo){ // Somente variavel int ou char
        case 1:
            printf("Produto sem lactose\n");
            break;
        case 2:
            printf("Produto sem gluten\n");
            break;
        case 3:
            printf("Produto sem farinha\n");
            break;
        case 4:
            printf("Produto vencido\n");
            break;
        default:
            printf("Codigo invalido\n");
    }

    return 0;
}
