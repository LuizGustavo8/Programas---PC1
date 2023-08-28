#include <stdio.h>
#include <stdlib.h>
//#include <cstring>

int main() {

    int n, menor, maior, i, j;
    scanf("%d", &n);

    char str[6];

    while (n--) {
        scanf("%d %d", &menor, &maior);
        for (i = menor; i <= maior; i++)
            printf("%d", i);
        for (i = maior; i >= menor; i--) {
            sprintf(str, "%d", i);
            for (j = strlen(str)-1; j >= 0; j--)
                printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
