#include <stdio.h>

int main() {

int X, Y, cont,quebra=0;
scanf("%i %i",&X,&Y);
  if(1 < X < 20 && X < Y < 100000){
    for(cont=1;cont<=Y;cont++){
        printf("%i",cont);
        quebra++;
        if(quebra == X){
           printf("\n");
           quebra = 0;
        }else{
            printf(" ");//Cada sequ�ncia deve ser impressa em uma linha apenas, com 1 espa�o em branco entre cada n�mero, conforme exemplo abaixo.
                        //N�o deve haver espa�o em branco ap�s o �ltimo valor da linha.
        }
        }
    }
}


