#include <stdio.h>

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
