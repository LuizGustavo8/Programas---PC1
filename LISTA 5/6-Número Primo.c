
#include <stdio.h>
int main() {

int N, X,testes,cont,resto=0;
scanf("%i",&N);
for(testes=1;testes<=N;testes++){//Quantidade de vezes N que o programa vai rodar
    scanf("%i",&X);
    for (cont=1;cont<=X;cont++){//Faz testes de 1 até o número digitado
        if(X%cont == 0){//Todo número divisível aumenta em 1 o contador "resto"
        resto++;
    }
}
    if(resto == 2){//Quando o número de resto for 2, o número será divisel somente por 1 e por ele mesmo, logo é primo
    printf("%i eh primo\n", X);
      }else{
        printf("%i nao eh primo\n", X);
      }
      resto = 0;

}
}


