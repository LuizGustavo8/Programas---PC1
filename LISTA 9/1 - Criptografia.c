#include <stdio.h>
#include <string.h>

int main() {/*
  char texto[50], auxiliar[50];
  int tamanho, cont, quantidade, entradas, aux;

    scanf("%[^\n]s",texto);
    tamanho = strlen(texto);
    quantidade = strlen(texto)-1;
for(cont=0;texto[cont]!='\0';cont++){
    if (texto[cont] >= 65 && texto[cont]<=90 || texto[cont] >= 97 && texto[cont]<=122 ){
    auxiliar[quantidade] = texto[cont]+3;
    quantidade--;
    }else{
    auxiliar[quantidade] = texto[cont];
    quantidade--;
    }
  }
  auxiliar[cont]='\0';
  strcpy(texto,auxiliar);

  for(int i=0; i<(tamanho/2);i++){
    printf("%c",texto[i]);
  }

  for(int i=(tamanho/2);i<tamanho;i++){
    printf("%c",texto[i]-1);

}
return 0;
*/
char palavra[1100], aux;
  unsigned casos;
  unsigned short i, j, tam, tamMetade;

  scanf("%u", &casos);

  while (casos)
  {

    scanf(" %[^\n]", palavra);

    tam = strlen(palavra);
    tamMetade = tam/2;

    //Primeira passada na string move caracteres minúsculos e maiúsculos 3 posições;
    for (i = 0; i < tam; i++ )
      if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z'))
        palavra[i] = palavra[i] + 3;

    //Segunda passada inverte a String;
    for (i = 0, j = tam - 1; i < tamMetade; i++, j--)
    {

      aux = palavra[j];
      palavra[j] = palavra[i];
      palavra[i] = aux;

    }

    //Terceira passada modifica qualquer caracrete da metade em diante em uma posição;
    for (i = tamMetade; i < tam; i++ )
      if ((palavra[i] >= 32 && palavra[i] <= 176 ))
        palavra[i] = palavra[i] - 1;

    printf("%s\n", palavra);

    //Reseta a string para a proxima iteração;
    memset(palavra, 0 , sizeof(palavra));

    casos--;
  }
}


