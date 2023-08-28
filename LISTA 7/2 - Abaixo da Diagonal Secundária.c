#include <stdio.h>
int main() {
    int i, j;
    char t;
    double M[12][12], a = 0;
    scanf("%c",&t);
    for (i=0; i<12; i++) {
        for (j=0;j<12;j++) {
            scanf("%lf", &M[i][j]);
            if (j + i > 11)
                a += M[i][j];
        }
    }
    if (t=='M') a /= 66.0;
    printf("%.1lf\n", a);
    return 0;
}
