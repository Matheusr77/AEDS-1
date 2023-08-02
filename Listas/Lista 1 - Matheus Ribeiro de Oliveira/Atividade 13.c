//Atividade 13

/*Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira
e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do
aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser
igual ou superior a 60 pontos.*/

#include <stdio.h>

    int main () {

        float n1, n2, n3, nota, media;
      

        printf("Digite a nota da primeira prova: ");
        scanf("%f", & n1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", & n2);
        printf("Digite a nota da terceira prova: ");
        scanf("%f", & n3);

        nota = n1 + n2 + n3;
        media = ((n1 * 1) + (n2 * 1) + (n3 * 2)/4);

        if (nota >= 60)
        {
            printf("A media do aluno e %.2f", media);
            printf("\nEste aluno foi aprovado!");
        }
        
        else
        {
            printf("A media do aluno e %.2f", media);
            printf("\nEste aluno foi reprovado!");       
        }


    return 0;

    }





