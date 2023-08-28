#include <stdio.h>
#include <stdlib.h>
/*Função é um conjunto de comandos que recebe um nome e
pode ser chamada em parte do programa, quantas vezes forem necessárias.
*/

int main() {
 int cont,X,Y,troca,soma;
    while(scanf("%d%d",&X,&Y)==2){
        soma=0;
        if(X>Y){
            troca=X;
            X=Y;
            Y=troca;
        }
        if(X%2!=0){
        for(cont=X+2;cont<Y;cont++){
            if(cont%2!=0)
                soma+=cont;
            }
        }
        else{
            for(cont=X+1;cont<Y;cont++){
            if(cont%2!=0)
                soma+=cont;
            }
        }
        printf("%d\n",soma);

}
}
