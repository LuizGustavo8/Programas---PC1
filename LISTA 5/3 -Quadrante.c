
#include <stdio.h>

int main() {

int X,Y;
scanf("%i %i",&X,&Y);
while(X!=0 && Y!=0){
    if(X>0 && Y>0){
        printf("primeiro\n");
    }
    else if(X<0 && Y>0){
        printf("segundo\n");
    }
    else if(X<0 && Y<0){
        printf("terceiro\n");
    }
    else if(X>0 && Y<0){
        printf("quarto\n");
    }
scanf("%i %i",&X,&Y);
}
    return 0;
}
