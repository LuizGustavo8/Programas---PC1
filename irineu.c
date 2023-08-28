#include <stdio.h>
#include <string.h>//necessário para strncmp;
int main (void)
{
  char str1[15] = "Curso de C";
  char str2[15] = "Curso";
  int retorno;

  retorno = strncmp(str1, str2, 6);

  printf("retorno = %d\n", retorno);

  return 0;
}
