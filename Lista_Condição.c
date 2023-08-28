#include<stdio.h>

main(){
//Questão 5
int x,y,z;
printf("Digite o valor de x: \n");
scanf("%i",&x);
printf("Digite o valor de y: \n");
scanf("%i",&y);
printf("Digite o valor de z: \n");
scanf("%i",&z);

if(x==y && x==z){
    printf("3 valores iguais");
}else if((x==y && x!=z) || (x==z && x!=y)){
    printf("2 valores iguais");
}else{
printf("Nenhum valor igual");
}
//Questão 6
int num1=1, num5=5, num10=10, valor;
printf("\n Digite o valor: \n");
scanf("%i",&valor);
if(valor == num1){
    printf("O valor é 1");
}else if(valor == num5){
    printf("O valor é 5");
}else if(valor == num10){
    printf("O valor é 10");
}else
    printf("Valor Invalido.");
//Questão 7
int a;
printf("\n Digite um valor : \n");
scanf("%i",&a);
if (a % 2 == 0){
    printf("eh par");
}else
    printf("eh impar");
//Questão 8
int b;
printf("\n Digite um valor : \n");
scanf("%i",&b);
if (b == 0){
    printf("eh zero");
}else if (b>0){
    printf("eh positivo");
}else{
    printf("eh negativo");
    }
//Questão 9
int i,j;
printf("\n Digite a Coordenada:  \n");
scanf("%i %i",&i,&j);
if(i == 0 && j ==0){
    printf("Ponto na origem\n");
}else if(i !=0 && j ==0){
    printf("Ponto sobre o eixo X\n");
}else if(i ==0 && j !=0){
    printf("Ponto sobre o eixo Y\n");
}else if(i >=0 && j >=0){
    printf("Ponto no 1o. quadrante\n");
}else if(i >0 && j >0){
    printf("Ponto no 1o. quadrante\n");
}else if(i <0 && j >0){
    printf("Ponto no 2o. quadrante\n");
}else if(i <0 && j <0){
    printf("Ponto no 3o. quadrante\n");
}else if(i >0 && j <0){
    printf("Ponto no 4o. quadrante\n");
}

//Questão 11
int numx,numy,operador;
printf("\n Digite 2 valores:  \n");
scanf("%i %i",&numx,&numy);
printf("Escolha o numero correspondente a operacao desejada: \n");
printf(" 1-Soma \n 2-Subtracao \n 3-Multiplicacao \n 4-Divisao \n");
scanf("%i",&operador);
if(operador==1){
    printf("Soma: %i",(numx + numy));
}else if(operador==2){
    printf("Subtracao: %i",(numx - numy));
}else if(operador==3){
    printf("Multiplicacao: %i",(numx * numy));
}else if(operador==4){
    printf("Divisao: %i",(numx / numy));
}
 //Questão 12 - Ordem decresente
int p1, p2 ,p3,troca;
printf("\n Digite 3 valores:  \n");
scanf("%i %i %i",&p1, &p2 ,&p3);
if (p1>p2){
    if(p2>p3){
    printf("%i %i %i", p1,p2,p3);
    }else {
        if(p1>p3){
        printf("%i %i %i",p1,p3,p2);
        }else {
        printf("%i %i %i",p3,p1,p2);
    }
    }
}else if (p1<p2){
    if(p2<p3){
    printf("%i %i %i",p3,p2,p1);
    }else{
        if(p1>p3){
        printf("%i %i %i",p2,p1,p3);
        }else{
        printf("%i %i %i",p2,p3,p1);
}
}
}
}


