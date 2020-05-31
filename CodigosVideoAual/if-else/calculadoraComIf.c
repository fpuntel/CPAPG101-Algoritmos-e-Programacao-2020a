#include <stdio.h>

/*
Faça um algoritmo que simule uma calculadora. O algoritmo deve realizar a leitura do primeiro algarismo,
depois o operador que deseja utilizar e por fim o outro algarismo.
*/

int main(){
    float numero1, numero2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o operador: ");
    //fflush(stdin);
    scanf(" %c", &operador);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    if(operador == '+'){
        resultado = numero1 + numero2;
        printf("Resultado da soma: %f", resultado);
    }else if(operador == '-'){
        resultado = numero1 - numero2;
        printf("Resultado da subtracao: %f", resultado);
    }else if(operador == '*'){
        resultado = numero1 * numero2;
        printf("Resultado da multiplicacao: %f", resultado);
    }else if(operador == '/'){
        resultado = numero1 / numero2;
        printf("Resultado da divisao: %f", resultado);
    }else {
        printf("Operador digitado eh invalido");
    }

    return 0;
}
