#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N,i,cont,X,Y;
    char n1[1001],n2[1001];

    scanf("%d",&N);

    for(i=0;i<N;i++){
        cont=0;
        scanf("%s %s",&n1,&n2);

        for(X=strlen(n2),Y=strlen(n1);X>=0;X--,Y--){
            if(n1[Y]==n2[X])cont++;
            else break;
        }
        if(cont==strlen(n2)+1)printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
    }
