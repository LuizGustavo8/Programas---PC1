#include <stdio.h>

int main() {

int M, N,aux,cont,soma=0;
scanf("%i %i",&M,&N);
while(M>0 && N>0){
    if(M>N){
    aux=M;
    M=N;
    N=aux;
    for(cont=M;cont<=N;cont++){
      printf("%i ",cont);
      soma = soma + cont;
    }
    printf("Sum=%i\n",soma);
    soma = 0;
    }else{
    for(cont=M;cont<=N;cont++){
      printf("%i ",cont);
      soma = soma + cont;
    }
    printf("Sum=%i\n",soma);
    soma = 0;
    }
   scanf("%i %i",&M,&N);
}
 return 0;
}

