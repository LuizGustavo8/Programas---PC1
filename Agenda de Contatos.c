#include <stdio.h>
#include <time.h>
#define TAM 100

typedef struct Agenda{
        char nome[50];
        char fone[17];
        char email[80];
}contatos;

static int qtd = 0;     // qtd é uma variavel do tipo estatica que conta a quantidade de contatos incritos
contatos max[TAM];      // agora max[100] é um vetor do tipo contatos definido com o typedef
FILE *arq;              // declarar a variável(*arq) como ponteiro do arquivo(FILE)

void Incluir(void){
     int cont = 0;   //cont sera a variavel contadora
     int retorno;    //retorno seve para definir se fwrite funcionou


     arq = fopen("agenda.txt", "a");// fopen cria arquivo de entrada
     if (arq == NULL){//caso o sistema não consiga criar o arquivo
        printf ("Erro!\nO arquivo da lista não pode ser aberto!\n");//sera mostrada esta mensagen
        getch();// espera que o usuário pressione uma tecla
        exit(1);//caso esse erro ocorra este comando encerra o programa
     }
     while (cont < TAM){
           printf (" Digite o nome: ");
           gets(max[cont].nome);
           printf (" Digite o numero: ");
           gets(max[cont].fone);
           printf (" Digite o E-mail: ");
           gets(max[cont].email);

           /* fwrite grava 1 contato na struct Agenda
           essa lilha pode ser escrita da seguinte forma:
           retorno = fwrite (&max[cont], sizeof(struct Agenda) ,1,arq);*/
           retorno = fwrite (&max[cont], sizeof(contatos) ,1,arq);
           // fwrite retornara um valor int 1 para sucesso e 0 para fracasso
           if (retorno == 1) {
               printf("\n Gravacao ok! ");
           }
           cont++;//enquanto cont for menor 100 adiciona mais um contato
           qtd++;//acrecenta 1 contato a mais
           menu();

     }
     fclose (arq);//fecha o arquivo agenda.txt
}
void Listar(void){
    int i = 0, retorno;

    arq = fopen("agenda.txt", "r");//fopen abre o arquivo no modo leitura "r"
    if (arq == NULL){//caso o SO não consiga abrir o arquivo
       printf ("Erro!\nO arquivo da lista não pode ser aberto!\n");//sera mostrada esta mensagens
       getch();//espera que o usuário pressione uma tecla
       exit(1);//caso esse erro ocorra este comando encerra o programa
    }
    retorno = fread(&max[i], sizeof(contatos), 1, arq);//fread le apenas 1 contato do arquivo
    while (retorno == 1){ //o retorno recebe a quantidade de contatos lidos no fread
      printf("\n Nome....: %s",max[i].nome);
      printf("\n Fone....: %s",max[i].fone);
      printf("\n E-mail..: %s\n",max[i].email);
      i++;
      retorno = fread(&max[i], sizeof(contatos), 1, arq);//fread vai ler o proximo contato
    }
    printf(" \n\n %d Contatos salvos!\n ", i);
    getch();//espera que o usuário pressione uma tecla
    fclose(arq);//fecha o arquivo agenda.txt
}
void menu(void){
    char op;//variavel de opção
    do{
        system("cls");// limpar tela
        printf("\n\n\t\tAGENDA EM LINGUAGUEM C\n");
        printf("\n 1 = Incluir\n 2 = Listar\n");
        op = getch();
        switch(op){
            case '1':
                Incluir();
                break;
            case '2':
                Listar();
                break;
 default:
                printf("\a Digite uma opção valida\n");
                getch();//espera que o usuário pressione uma tecla
        }
    }
    while (op);
}

int main (){
int var;
    system("title AGENDA");
    system("color 1f");// Define a o plano de Fundo Azul Marinho e o texto em Branco
menu();// chamando a funçao menu para a main
system("pause");





}
