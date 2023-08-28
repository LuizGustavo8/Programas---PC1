#include <stdio.h>
int main (){
int N,cont;
scanf("%i",&N);
for(cont=1; cont<=N; cont++){
    if(cont%2 == 0){
       printf("%i^2 = %i\n",cont,(cont*cont));
    }
}
}
