#include <stdio.h>
int main() {

    int c, i, j;
    char t;
    double m[12][12], a = 0;

    scanf("%i",&c);
    scanf(" %c",&t);

    for (i=0; i<12; i++) {
        for (j=0;j<12;j++) {
            scanf("%lf", &m[i][j]);
            if(j==c)
                a= a + m[i][c];
        }
    }

    if (t=='M') a /= 12.0;

    printf("%.1lf\n", a);

    return 0;
}
