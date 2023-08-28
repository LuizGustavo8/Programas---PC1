#include<stdio.h>
int main() {
    int n,i;
    scanf("%i",&n);
    int v[n];
    scanf("%i",&v[0]);
    int menor=v[0],p=0;
    for(i = 1; i < n; i++) {
        scanf("%i",&v[i]);
        if (v[i]<menor){
            p=i;
            menor=v[i];
        }
    }
    printf("Menor valor: %i\n",menor);
    printf("Posicao: %i\n",p);
    return 0;
}
