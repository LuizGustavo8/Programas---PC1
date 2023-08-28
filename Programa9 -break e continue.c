#include<stdio.h>
#include<stdlib.h>
/*Comando Break: Serve para interromper a repetição de qualquer comando  de
laço (for, while ou do-while)
*/
int main(){
 int a,b;
 printf("Digite dois valores: ");
 scanf("%d %d",&a,&b);
 while(a <=b){
    a = a +1;
    if (a==5)
    break;
    printf("%d\n",a);/*programa vai ser interrompido assim que a=5,
    logo serão exibidos todos os valores menores que 5 e maiores ou iguais a a.
                    */
 }
/*Comando Continue: Serve para interromper a repetição atual e passa pra proxima.
*/
int c,d;
 printf("Digite dois valores: ");
 scanf("%d %d",&c,&d);
 while(c <=d){
    c = c +1;
    if (c==5)
    continue;
    printf("%d\n",c);/*programa vai ser interrompido assim que a=5,
    e vai continuar para todo c<5.
                    */

 }

}
