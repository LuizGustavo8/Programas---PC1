//Calcular a soma e a media de 10 numeros digitados pelo usuario.
#include <stdio.h>
#include<stdlib.h>
main (){
    /*O while executa um conjunto de comandos enquanto
    uma condição for verdadeira*/
    int a,b;
    printf("Digite dois numeros inteiros:");
    scanf("%d %d",&a,&b);
    while(a<b){
        a++;//Limita o programa,pois sempre que a<b, soma-se +1 até que a=b.
        printf("%d\n",a);
    }
printf("Fim do programa\n");
   /*O for permite executar, repetidamente, um conjunto
   de comandos de acordo com uma condição
   */
   int c, d, e;
   printf("Digite dois valores inteiros: ");
   scanf("%d %d",&c,&d);
   for (e = c;  e <= d; e++){
    printf("%d\n",e);
   }
printf("Fim do programa\n");
   /*O Do-while garante que o programa execute pelo menos uma vez
   o conjunto de comandos antes de verificar se a condição é verdadeira
   */
   int f, g;
   printf("Digite dois valores inteiros: ");
   scanf("%d %d",&f,&g);
   do {
    printf("%d\n",f);
    f++;
   }while(f<g);
   printf("Fim do programa\n");
   /*Alinhamento de repetições: consiste no uso de um comando de repetição
(while, for ou do-while)dentro do outro
*/
    int i,j;
 for(i=1; i<5; i ++){
    for (j=1; j<5; j++) {
        if (i ==j)
            printf("1");
        else
            printf("0");
    }
 printf("\n");
 }
   }
