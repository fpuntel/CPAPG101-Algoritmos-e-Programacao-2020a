#include <stdio.h>

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
