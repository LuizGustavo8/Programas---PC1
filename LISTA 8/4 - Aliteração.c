#include <stdio.h>
#include <string.h>

int main() {

    char linha[5010], *w, anterior = ' ', l;
    int n, podeContar;

    while (scanf ("%[^\n]%*c", linha) != EOF) {

        n = 0;
        podeContar = 1;

        for (w = strtok(linha, " "); w != NULL; w = strtok(NULL, " ")) {

            l = w[0];

            if (l >= 'a' && l <= 'z')
                l -= 32;

            if (anterior != l)
                podeContar = 1;
            else if (podeContar) {
                n++;
                podeContar = 0;
            }

            anterior = l;
        }

        printf("%d\n", n);
    }

    return 0;
}
