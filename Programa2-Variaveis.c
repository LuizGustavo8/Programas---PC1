#include <stdio.h>

main(){
    //int = numéros inteiros e  float = numeros reais
    int num1=10,num2=3;
    float j;
    j = (float)num1/num2;
    //Resto da Divisão
    int k;
    k = num1%num2;
    printf("%i %i %f %i\n",num1,num2,j,k);
    //Leitura dos valores

    int num3, num4;
    printf("Digite 2 numeros: ");
    scanf("%d %d",&num3,&num4);


    int r;
    r = num3+num4;
    printf("%i %i %i",num3,num4,r);

}
