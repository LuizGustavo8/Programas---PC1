
#include <stdio.h>

int main() {
double N1, N2, N3, N4, Media1,NotaExam,MediaFinal;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    Media1 = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/(10);
    printf("Media: %.1lf\n",Media1);
    if (Media1 >= 7.0){
        printf("Aluno aprovado.\n");
    }else if (Media1 < 5.0){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        scanf("%lf",&NotaExam);
        printf("Nota do exame: %.1lf\n",NotaExam);
        MediaFinal = (Media1 + NotaExam)/(2);
        if (MediaFinal >= 5.0){
           printf("Aluno aprovado.\n");
        }else{
           printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",MediaFinal);
    }
}
