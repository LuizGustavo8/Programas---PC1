#include <stdio.h>
#include <string.h>
int main() {
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    char palavra[200];
    int frequencia[26];
    int N,cont, i, j, maior;
    scanf("%i ", &N);
    for(cont=0;cont<N;cont++) {
        //fgets(palavra,200,stdin);
        scanf ("%[^\n]%*c", palavra);
        for (i = 0; i < 26; i++)
            frequencia[i] = 0;
        for (i = 0; i < strlen(palavra); i++) {
            for (j = 0; j < 26; j++) {
                if (palavra[i] == alfabeto[j] || palavra[i]+32 == alfabeto[j]) {
                    frequencia[j]++;
                    break;
                }
            }
        }
        maior = frequencia[0];
        for (i = 1; i < 26; i++)
            if (frequencia[i] > maior)
                maior = frequencia[i];
        for (i = 0; i < 26; i++)
            if (frequencia[i] == maior)
                printf("%c", alfabeto[i]);
        printf("\n");
    }
    return 0;
}
