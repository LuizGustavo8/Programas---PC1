#include <stdio.h>

int main() {

    int n, indice, indice2, indice3, indice4, contador, eleito, flag;
    scanf("%i", &n);

    int numeros[n];

    indice = 0;
    while (indice < n)
        scanf("%i", &numeros[indice++]);

    for (indice2 = 1 ; indice2 <= n-1; indice2++) {
        eleito = numeros[indice2];

        for (indice3 = indice2-1; indice3 >= 0; indice3--) {
            if (numeros[indice3] > eleito) {
                numeros[indice3 + 1] = numeros[indice3];
                flag = 1;
            }
            else break;
        }

        if (flag)
            numeros[indice3 + 1] = eleito;
    }

    indice = 0;
    while (indice < n) {

        contador = 1;
        indice4 = 0;

        while (indice4 < n) {

            if (numeros[indice] == numeros[indice4] && indice != indice4)
                contador++;

            indice4++;
        }

        printf("%i aparece %i vez(es)\n", numeros[indice], contador);
        indice += contador;
    }

    return 0;
}
