#include <stdio.h>
main(){//Compara o conteudo da variável com as constantes fornecidas
char Est_Civil;
printf("Insira o estado civil: ");
scanf("%c",&Est_Civil);
switch(Est_Civil) {

 case 'C': printf("Casado\n");
           break;
 case 'S': printf("Solteiro\n");
           break;
 case 'D': printf("Divorciado\n");
           break;
 case 'V': printf("Viuvo\n");
           break;
default : printf("Estado civil incorreto\n");
}

}
