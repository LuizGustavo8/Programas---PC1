#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char linha[60];
    const char delimitador[2] = " ";
    scanf("%i ", &n);
    while (n--) {
        scanf ("%[^\n]%*c", linha);
        char *termo;

        termo = strtok(linha, delimitador);

        while (termo != NULL) {
            printf("%c", termo[0]);
            termo = strtok(NULL, delimitador);
        }
        printf("\n");
    }

    return 0;
}
