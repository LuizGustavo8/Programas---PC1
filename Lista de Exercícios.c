#include <stdio.h>
#include <stdlib.h>
int main (){

/*
1)Fa�a um programa para calcular o n�mero de v�rtices de um cubo com 6 faces e 12 arestas. A
rela��o entre v�rtices, arestas e faces de um objeto geom�trico � dada por:
�v�rtices + faces = arestas + 2�.
*/

int vertices, faces, arestas;
faces = 6;
arestas = 12;
vertices = arestas + 2 - faces;
printf ("O numero de vertices e  = %d \n\n",vertices);

/*
2)Sabe-se que o valor de cada 1000 litros de �gua corresponde a 2% do sal�rio m�nimo. Fa�a um
programa para receber o valor do sal�rio m�nimo e a quantidade de �gua consumida em uma
resid�ncia por m�s. O programa dever� calcular e mostrar:
*/
//a) o valor da conta de �gua.

int agua, salario;
float k, j, t;
salario = 1100;
printf( "Qual foi a quantidade de agua consumida em uma na residencia no mes? \n\n");
scanf("%d",&agua);
k = agua/1000;
j = (salario*2)/100;
t = (k*j);
printf("a = %f e j = %f ",k,j);
printf("O valor da conta de agua e: %f \n\n", t);

//b) o valor a ser pago com desconto de 15%.
int y;
y = (t*85)/100;
printf( "O valor da conta com 15 por cento de desconto e: %d \n\n", y);

/*
3)Fa�a um programa que recebe dois valores na vari�veis A e B e, em seguida, troca o conte�do destas
vari�veis. Por exemplo, se o usu�rio digitar A=5 e B=3, o programa dever� trocar os valores de tal
maneira que A seja igual a 3 e B igual a 5.
*/
int A, B, C;
printf("Digite o valor de A:\n ");
scanf("%d",&A);
printf("Digite o valor de B:\n ");
scanf("%d",&B);
C = A;
A = B;
B = C;
printf("A = %d e B = %d\n\n", A, B);

/*
4)Escreva um programa para determinar a quantidade de litros de combust�vel gastos em uma viagem
por um autom�vel que faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem � T=35 min e
a velocidade m�dia do autom�vel � V = 80 km/h.
*/

float Tempo, Velocidade, Distancia, Gasto, Combustivel;
Tempo = 0.583;// Em hora
Velocidade = 80;
Distancia = Tempo*Velocidade;
Gasto = 12;
Combustivel = Distancia/Gasto;
printf("a quantidade de litros de combustivel gastos na viagem foi de: %f \n\n", Combustivel);

/*
5)Fa�a um programa que calcula a m�dia de quatro n�meros introduzidos pelo usu�rio.
*/
float a, b, c, d, r;
printf("Digite o valor de a:\n ");
scanf("%f",&a);
printf("Digite o valor de b:\n ");
scanf("%f",&b);
printf("Digite o valor de c:\n ");
scanf("%f",&c);
printf("Digite o valor de d:\n ");
scanf("%f",&d);
r = (a+b+c+d)/4;
printf("A media de abcd e: %f",r);
}
