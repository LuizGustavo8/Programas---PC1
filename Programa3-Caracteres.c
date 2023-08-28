#include<stdio.h>
main(){
//Caracteres definido
char letra;
letra='t';
printf("O caracter e: %c\n\n",letra);
//Com leitura scanf
char letra2;
printf("Digite um caracter: ");
scanf("%c",&letra2);
getchar();
printf("\nO conteudo da variavel e:%c\n\n", letra2);
//Mais leitura
char c1, c2;
printf("Digite um caracter: ");
scanf("%c",&c1);
getchar();
printf("Digite outro caracter: ");
scanf ("\n%c",&c2);


printf("\n%c \n%c \n",c1,c2);




}
