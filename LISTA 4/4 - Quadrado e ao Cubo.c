#include <stdio.h>
int main()
{
    int N, cont;
    scanf("%i",&N);
    for(cont=1;cont<=N;cont++){
        printf("%i %i %i\n",cont,cont*cont,cont*cont*cont);
    }
}
