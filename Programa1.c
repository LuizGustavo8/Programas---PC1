#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){

//Gerar um valor aleatório de 1 a 10
//Pedir e armazenar um chute
//Informar se o chute foi maior, menor ou igual, se igual encerrar o programa
srand(time(NULL));
int i = rand() % 10;
int j;
int c;
printf("numero e %d\n",i);

for (j=1; j<10; j++){
    printf("Chute um numero\n");
    scanf("%d",&c);
     if (c > i)
        printf("O chute e maior q o numero\n");
     else if(c < i)
        printf("O chute e menor q o numero\n");
     else if(c == i){
        printf("Acertou\n"); return 0;}




}
}
