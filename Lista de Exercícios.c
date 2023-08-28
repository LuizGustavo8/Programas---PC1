#include <stdio.h>
#include <stdlib.h>
int main (){

/*
1)Faça um programa para calcular o número de vértices de um cubo com 6 faces e 12 arestas. A
relação entre vértices, arestas e faces de um objeto geométrico é dada por:
“vértices + faces = arestas + 2”.
*/

int vertices, faces, arestas;
faces = 6;
arestas = 12;
vertices = arestas + 2 - faces;
printf ("O numero de vertices e  = %d \n\n",vertices);

/*
2)Sabe-se que o valor de cada 1000 litros de água corresponde a 2% do salário mínimo. Faça um
programa para receber o valor do salário mínimo e a quantidade de água consumida em uma
residência por mês. O programa deverá calcular e mostrar:
*/
//a) o valor da conta de água.

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
3)Faça um programa que recebe dois valores na variáveis A e B e, em seguida, troca o conteúdo destas
variáveis. Por exemplo, se o usuário digitar A=5 e B=3, o programa deverá trocar os valores de tal
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
4)Escreva um programa para determinar a quantidade de litros de combustível gastos em uma viagem
por um automóvel que faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem é T=35 min e
a velocidade média do automóvel é V = 80 km/h.
*/

float Tempo, Velocidade, Distancia, Gasto, Combustivel;
Tempo = 0.583;// Em hora
Velocidade = 80;
Distancia = Tempo*Velocidade;
Gasto = 12;
Combustivel = Distancia/Gasto;
printf("a quantidade de litros de combustivel gastos na viagem foi de: %f \n\n", Combustivel);

/*
5)Faça um programa que calcula a média de quatro números introduzidos pelo usuário.
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
