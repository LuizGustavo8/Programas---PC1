
#include <stdio.h>

int main() {
 int X, Y,soma=0;
 scanf("%i %i",&X,&Y);
 Y++;
 while(X>Y){
     if(Y%2 != 0){
         soma = soma + Y;
     }
     Y++;
 }
printf("%i\n",soma);
    return 0;
}
