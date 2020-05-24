#include <stdio.h>

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
