//Atividade 14

/*A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral 
e a um exame final. A media das três notas mencionadas anteriormente obedece aos 
pesos: Trabalho de Laboratorio: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo  ̃
com o resultado, mostre na tela se o aluno esta reprovado (média entre 0 e 2,9), de  ́
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.  ́*/

#include <stdio.h>

int main () {

        float n1, n2, n3, media, p1, p2, p3;
      

        printf("Digite a nota do trabalho de laboratorio: ");
        scanf("%f", & n1);
        printf("Digite a nota da avaliacao semestral: ");
        scanf("%f", & n2);
        printf("Digite a nota do exame final: ");
        scanf("%f", & n3);

        p1 = 2;
        p2 = 3;
        p3 = 5;
        media = (((n1 * p1) + (n2 * p2) + (n3 * p3))/ (p1 + p2 + p3));

        if ((media >= 0) && (media <= 2.9))
        {
            printf("A media do aluno e %.1f", media);
            printf("\nEste aluno foi reprovado!");
        }
        
        else if ((media >= 3) && (media <= 4.9))
        {
            printf("A media do aluno e %.1f", media);
            printf("\nEste aluno esta de recuperação!");
        }
        
        else if ((media >= 5))
        {
            printf("A media do aluno e %.1f", media);
            printf("\nEste aluno foi aprovado!");       
        }


    return 0;

    }




