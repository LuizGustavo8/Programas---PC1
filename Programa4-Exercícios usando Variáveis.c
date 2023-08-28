#include <stdio.h>
#include <stdlib.h>
main (){
/*Uma conta de caderneta foi aberta com um depósito inicial de R$500,00.
Imagine que esta conta é remunerada em 1% de juros ao mês.
Qual será o valor da conta após três meses?
*/
//Resolução com multiplas variáveis
float d,p,s,t;
d = 500; //deposito inicial
p = d + 0.01*d;//Primeiro mes
s = p + 0.01*p;//Segundo mes
t = s + 0.01*s;// Terceiro mes
printf( "Valor da conta = %.2f\n",t);
//Resolução com apenas uma variável
float j;
j = 500; //deposito inicial
j = j + 0.01*j;//Primeiro mes
j = j + 0.01*j;//Segundo mes
j = j + 0.01*j;// Terceiro mes
printf( "Valor da conta = %.2f\n",j);

/* Considere que as variáveis A e B armazenam valores inteiros diferentes.
Escreva um programa para efetuar a troca dos valores de forma que a
variável A passe a possuir o valor da variável B e que a
variável B passe a possuir o valor da A.
Apresentar os valores finais de A e B.
*/
int A, B, C;
//valores aleatórios para A e B
A = 35;
B = 10;
// Troca de Valores
C = A;
A = B;
B = C;
printf("A = %d e B = %d\n", A, B);
}
