#include<stdio.h>
main(){
//Organização com If
int x,y,tmp;
printf("Digite dois numeros inteiros:");
scanf("%d %d",&x,&y);
if(x>y){//Para organizar os valores em ordem Crescente
    tmp = x;
    x = y;
    y = tmp;
}
printf("valores em ordem crecente: %d %d",x,y);
/*
Escreva um programa que solciita um salrio ao usuario e mostra o imposto a pagar.
Se o salario for negativo ou zero, aponte o erro.
Se o salario for maior que 1000, calcule 10% de imposto.
Se o salario for menor que 1000, calcule 5% de imposto.
*/
float salario;
printf("\n\nInsira o valor do Salario: ");
scanf("%f",&salario);
if(salario<=0)
    printf("Erro, valor invalido.");
else{
if(salario>1000)
    printf("Valor do imposto: %f",salario*0.1);
else
    printf("Valor do imposto: %f",salario*0.05);
}
}
