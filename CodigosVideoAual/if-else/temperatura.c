#include <stdio.h>

/*
SE temperatura > 30
	ligar ar condicionado no 21 °C.
SENÃO SE temperatura < 10
	ligar ar condicionado no 28 °C.
SENÃO
	não ligar o ar condicionado.
*/

int main(){
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > 30){
        printf("Ligar ar condicionado no 21 graus.");
    }else if(temperatura < 10){
        printf("Ligar ar condicionado no 28 graus.");
    }else{
        printf("Nao ligar o ar condicionado");
    }
    // continua a execucao
    return 0;
}
