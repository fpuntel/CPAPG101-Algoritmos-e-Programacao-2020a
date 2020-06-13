#include<stdio.h>

int main(){
    int l, c;
    int matriz[3][2];

    matriz[0][0] = 1;
    matriz[0][1] = 4;
    matriz[0][2] = 7;

    matriz[1][0] = 2;
    matriz[1][1] = 5;
    matriz[1][2] = 8;

    for(c=0;c<3;c++){
      for(l=0;l<2;l++){
         printf("%d", matriz[l][c]);
       }
       printf("\n");
    }

}
