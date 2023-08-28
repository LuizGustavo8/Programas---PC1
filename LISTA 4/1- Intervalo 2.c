#include <stdio.h>
#include <stdlib.h>
int main(){
int quantidade, cont, numero, in=0, out=0;
scanf("%i",&quantidade);
 for (cont=1;cont<=quantidade; cont++){
        scanf("%i",&numero);
        if ((numero>=10) && (numero<=20)){
           in = in + 1;
        }else{out = out + 1; }}

printf("%i in\n",in);
printf("%i out\n",out);
}
