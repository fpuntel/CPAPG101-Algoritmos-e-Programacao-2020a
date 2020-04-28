#include <stdio.h>

/*
Faça um algoritmo que realize as seguintes conversões:
Quilogramas (Kg) para Gramas (g).
Gramas (g) para Quilogramas (Kg).
Ao final, apresente o resultado utilizando a função printf();
*/


int main(){

    float Kg, g;

    // KG -> g

    Kg = 17.5;

    g = Kg * 1000;

    printf("Kg: %f eh igual a: %f g\n", Kg, g);

    // g -> Kg

    g = 33600;

    Kg = g / 1000;

    printf("g: %f eh igual a: %f Kg\n", g, Kg);

    return 0;
}
