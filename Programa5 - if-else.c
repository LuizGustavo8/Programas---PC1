#include <stdio.h>
main(){
    //If, Se
int valor;
printf("Digite um valor inteiro:");
scanf ("%i",&valor);
if (valor>=0){
    printf("Valor maior ou igual a zero.");
}
if (valor <0){
   printf("Valor negativo.");
}
   //Else, complemento de se (se não)
int valor2;
printf("\n\nDigite um segundo valor inteiro:");
scanf ("%i",&valor2);
if(valor2>=0)
    printf("Valor maior ou igual a zero.");
else
   printf("Valor negativo.");
   //Valor igual
int valor3;
printf("\n\nDigite um terceiro valor inteiro:");
scanf("%i",&valor3);
if(valor3 ==0)
    printf("valor igual a zero");
else
    printf("Valor diferente de zero");
//Valor diferente
int valor4;
printf("\n\nDigite um quarto valor inteiro:");
scanf("%i",&valor4);
if(valor4 !=0)
    printf("valor diferente de zero");
else
    printf("Valor igual a zero");

}

