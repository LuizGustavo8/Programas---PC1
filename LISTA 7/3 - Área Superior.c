#include <stdio.h>
int main() {
    int i,j,min=1,max=10;
    char t;
    double M[12][12], a=0;
    scanf("%c",&t);
    for (i=0; i<12; i++) {
        for (j=0;j<12;j++) {
            scanf("%lf", &M[i][j]);
            if (i < 5 && j >= min && j <= max) {
                a += M[i][j];
            }
        }
        min++;
        max--;
    }
    if (t=='M') a /= 30.0;
    printf("%.1lf\n", a);
    return 0;
}
