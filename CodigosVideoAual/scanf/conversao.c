#include <stdio.h>

int main(){

    float f, c;

    printf("DIGITE A TEMPERATURA EM F:");
    scanf("%f", &f);

    c = ((f - 32) * 5) / 9;

    printf("TEMPERATURA EM C: %f\n", c);

    return 0;
}
