#include <stdio.h>

int main() {

int X, Y,cont,aux, soma=0;
scanf("%i", &X);
scanf("%i", &Y);
if(X>=Y){
    aux=X;
    X=Y;
    Y=aux;
    for(cont=X;cont<=Y;cont++){
        if(cont%13 !=0){
        soma = soma + cont;}
    }
}else{
    for(cont=X;cont<=Y;cont++){
        if(cont%13 !=0){
        soma = soma + cont;}
    }
}
printf("%i\n",soma);


    return 0;
}
