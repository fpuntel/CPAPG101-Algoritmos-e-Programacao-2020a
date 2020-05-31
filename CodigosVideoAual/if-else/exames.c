#include <stdio.h>

/*
Um hospital só permite que um paciente leve um acompanhante para realização de exames se o paciente tiver mais de 65 anos OU menos que 18 anos.
Faça um algoritmo que leia a idade do paciente e informe se o paciente possui ou não direito de um acompanhante.
*/

int main(){
    int idade;

    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);

    if(idade < 18 || idade > 65){
        printf("Paciente tem direito a um acompanhante");
    }else{
        printf("Paciente nao tem direito a um acompanhante");
    }

    return 0;
}
