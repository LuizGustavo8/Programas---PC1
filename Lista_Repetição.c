#include <stdio.h>
int main (){
//Questão 1
/*int contador;
float numero, media, soma;
soma = 0;
    for (contador=1; contador<=10; contador++){
        printf("Digite um numero: ");
        scanf("%f",&numero);
        soma = soma + numero;
    }
printf("Soma: %.2f\n", soma);
media = soma/10;
printf("Media: %.2f\n", media);
return 0;

//Questão 2

int contador, quantidade;
float numero, media, soma;
soma = 0;
printf("Digite a quantidade numeros: ");
scanf("%i",&quantidade);
    for (contador=1; contador<=quantidade; contador++){
        printf("Digite um numero: ");
        scanf("%f",&numero);
        soma = soma + numero;
    }
printf("Soma: %.2f\n", soma);
media = soma/10;
printf("Media: %.2f\n", media);
return 0;

//Questão 3

int cont, num1, num2, resultado = 0;
printf("Digite o primeiro numero: ");
scanf("%i",&num1);

printf("Digite o segundo numero: ");
scanf("%i",&num2);

for (cont=1;cont<=num2;cont++){
    resultado = resultado + num1;
}
printf("Resultado: %i\n", resultado);
return 0;


//Questão 4

int num1, fatorial;

printf("Digite o numero: ");
scanf("%d",&num1);
if(num1>0){
   for(fatorial = 1;num1 > 1;num1--){
   fatorial = fatorial * num1;
}
printf("Fatorial: %d\n", fatorial);}

else{printf("valor  invalido\n");}

return 0;

//Questão 5 e 6

int cont, n1, n2, soma = 0;
printf("Digite o primeiro numero: ");
scanf("%i",&n1);
printf("Digite o segundo numero: ");
scanf("%i",&n2);
if(n1>n2){printf("valor  invalido\n");}
else{
while(n1<n2){
    for(cont=n1;n1<=n2;n1++){
        if (n1%2 == 1){
            soma = soma + n1;
        }
    }
}
printf("Soma dos impares: %i\n", soma);
}

//Questão 7

int n, teste;
printf("Digite o numero: ");
scanf("%i",&n);
teste = n;
for(;teste>0;teste--){
        if(n%teste == 0 && n!=teste ||n == 1){
            printf("Nao e primo");
            break;
        }else if(teste == 2){
            printf("Eh primo");
            break;
        }

}
*/


int X,Y, cont, quebra=1 ;
scanf("%i%i",&X,&Y);

for(cont=1;cont<=Y;cont++){
    if (quebra == X){
            quebra = 1;
            printf("%i\n", cont);
        }
        else {
            printf("%i ", cont);
            quebra++;
        }
    }


















}

/**/
