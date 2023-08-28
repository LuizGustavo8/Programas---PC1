#include <stdio.h>

int main(){
int X,Y,cont,aux;
scanf("%i", &X);
scanf("%i", &Y);
if(X>Y){
    aux=X;
    X=Y;
    Y=aux;
}
X++;
for(cont=X;cont<Y;cont++){
    if(cont%5 == 2 || cont%5 == 3){
        printf("%i\n",cont);
    }
}
return 0;
}
