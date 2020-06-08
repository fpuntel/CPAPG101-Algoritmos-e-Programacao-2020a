#include <stdio.h>

/*
Desenvolva um programa em C que leia a velocidade atual de veículo e verifique:
- Se a velocidade for maior que 80, mostre a seguinte mensagem: “VEÍCULO MULTADO”.
- Senão o carro está em uma velocidade segura. 
*/

int main(){
    int velocidade;

    printf("Digite a velocidade do veiculo: ");
    scanf("%d", &velocidade);

    if(velocidade > 80){
        printf("VEICULO MULTADO\n");
    }else{
        printf("VEICULO ESTA EM UMA VELOCIDADE SEGURA");
    }


    return 0;
}
