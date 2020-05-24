#include <stdio.h>

int main(){
    float temperatura;

    printf("Digite a temperatura externa: ");
    scanf("%f", &temperatura);

    if(temperatura > 30 || temperatura < 10){
        printf("AR CONDICIONADO IRA LIGAR");
    }else{
        printf("AR CONDICIONADO NAO IRA LIGAR");
    }

    return 0;
}
