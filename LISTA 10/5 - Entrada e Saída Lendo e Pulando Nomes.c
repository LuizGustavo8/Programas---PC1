#include <stdio.h>
#include <stdlib.h>

int main() {
    char *linha = (char *) malloc(sizeof(char) * 31);

    int contador = 1;

    while (contador <= 10) {
        scanf("%s", linha);

        if (contador == 3 || contador == 7 || contador == 9)
            printf("%s\n", linha);

        contador++;
    }

    return 0;
}
