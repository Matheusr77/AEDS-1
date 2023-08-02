//Atividade 17

/*Enunciado grande*/

#include <stdio.h>
#include <stdlib.h>

int main () {

#define LINHAS 10
#define COLUNAS 3

    int notas[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; i++) 
    {
        for (int j = 0; j < COLUNAS; j++) 
        {
            printf("Digite a nota do aluno %d na prova %d: ", i+1, j+1);
            scanf("%d", &notas[i][j]);
        }
    }

    int num_pior_nota_prova1 = 0;
    int num_pior_nota_prova2 = 0;
    int num_pior_nota_prova3 = 0;

    for (int i = 0; i < LINHAS; i++) 
    {
        int pior_nota = notas[i][0];
        int contabilizado = 0;

        for (int j = 1; j < COLUNAS; j++) 
        {
            if (notas[i][j] < pior_nota) 
            {
                pior_nota = notas[i][j];
                contabilizado = j;
            }
        }

        if (contabilizado == 0) 
        {
            num_pior_nota_prova1++;
        } else if (contabilizado == 1) 
        {
            num_pior_nota_prova2++;
        } else {
            num_pior_nota_prova3++;
        }
    }

    printf("Número de alunos com pior nota na prova 1: %d\n", num_pior_nota_prova1);
    printf("Número de alunos com pior nota na prova 2: %d\n", num_pior_nota_prova2);
    printf("Número de alunos com pior nota na prova 3: %d\n", num_pior_nota_prova3);


    return 0;

}