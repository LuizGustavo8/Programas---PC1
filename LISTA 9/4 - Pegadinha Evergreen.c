#include <stdio.h>
#include <string.h>

int main ()
{

	char nome[100], sobrenome[100], nomecmpl[300];
	unsigned short casos, i, j, k;
	unsigned contador, aux;

	scanf("%hu", &casos);

	while (casos--)
	{

		scanf(" %[^\n] %[^\n]", nome, sobrenome);

		contador = 0;
		i = 0;
		k = 0;
		j = 0;

		aux = strlen(sobrenome);

		// Um la�o que continua at� que o tamanho da (talvez) menor string acabe;
		// Uma vez que a string do 'nome' sempre � iterada primeiro que a 'sobrenome';
		// A string 'sobrenome' vai acabar antes que a 'nome';
		while (aux--)
		{

			while (nome[i])
			{
				// A string 'nomecmpl' recebe as letras em 'nome' at� que 'contador' seja 2
				// 'contador' sendo == 2 significa que passei duas letras da string fonte para a string destino;
				// O la�o para e o la�o da string 'sobrenome' itera da mesma forma;
				nomecmpl[k++] = nome[i++];
				contador++;

				if (contador == 2)
					break;
			}

			contador = 0;
			while (sobrenome[j])
			{

				nomecmpl[k++] = sobrenome[j++];
				contador++;

				if (contador == 2)
					break;


			}

			contador = 0;
		}

		nomecmpl[k] = '\0';
		printf("%s\n", nomecmpl);
	}
}
