#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int pares = 0;
int soma=0;
int somamedia=0;
int acimadamedia=0;
int maior=0;
int diferenca=0;
int vetor[15];
for (i=0; i<15; i++){
    vetor[i]=rand()%100;
    printf("Valores: %d\n",vetor[i]);
}
for (i=0; i<15; i++){
       if (vetor[i] % 2 == 0){pares++;}
    }
for (i=0; i<15; i++){
       if (vetor[i] % 2 != 0){
           soma = vetor[i] + soma;}
}
for (i=0; i<15; i++){
        somamedia = somamedia + vetor[i];
        if (vetor[i]> somamedia/15){
        acimadamedia++;}
}

 printf("Quantidade de pares: %d\n",pares);
 printf("Soma de Impares: %d\n",soma);
 printf("Quantida de numeros acima da media: %i\n",acimadamedia);
printf ("somamedia: %i\n",somamedia);
return 0;
}
