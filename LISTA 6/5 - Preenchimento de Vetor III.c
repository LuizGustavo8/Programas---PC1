#include<stdio.h>
int main(){
    int i;
    double n[100];
    scanf("%lf",&n[0]);
    printf("N[0] = %.4lf\n",n[0]);
    i=1;
    for(;i<100;i++){
        n[i]=n[i-1]/2.0;
        printf("N[%i] = %.4lf\n",i,n[i]);
    }
}
