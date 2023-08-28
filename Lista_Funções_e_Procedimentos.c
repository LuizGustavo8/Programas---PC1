#include<stdio.h>

/* Questão 2

int multiplica (int N1, int N2){

int cont, resultado = 0;
for (cont=0;cont<N2;cont++){
    resultado = resultado + N1;
}
return(resultado);
}

int main (){

int N1, N2, resultado;
scanf("%i",&N1);
scanf("%i",&N2);

resultado = multiplica(N1, N2);

printf("Resultado = %i\n", resultado);
return 0;
}
*/
/*Questão 3

int SomaImpar (int N1, int N2){

int cont, soma = 0;
for (cont=N1;cont <= N2;cont++){
    if(cont%2 != 0){
    soma = soma + cont;
    }
}
return(soma);


}
int main (){


int N1, N2, resultado, troca;
scanf("%i",&N1);
scanf("%i",&N2);

    if(N1 > N2){
    troca = N1;
    N1 = N2;
    N2 = troca;
    }

resultado = SomaImpar(N1, N2);

printf("Soma dos Impares = %i\n", resultado);
return 0;
}
*/
/* Questão 4
int somatorio (int n){
int cont, resultado=0;
for (cont=3;cont<=n;cont++){
    resultado =(cont*5 + 2) + resultado;
}
return(resultado);
}
int main (){

int n, Soma;
scanf("%i",&n);

Soma = somatorio(n);

printf("Somatorio = %i\n", Soma);
return 0;
}
*/
