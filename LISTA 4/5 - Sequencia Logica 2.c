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
            printf(" ");//Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, conforme exemplo abaixo.
                        //Não deve haver espaço em branco após o último valor da linha.
        }
        }
    }
}


