//Atividade 8

/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao acima da  ̃
diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat[3][3], soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um elemento para a linha %d e a coluna %d da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          if (j > i)
          {
            soma = soma + mat[i][j];
          }
          
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }

    printf("\nA soma dos elementos que estao acima da diagonal principal e: %d", soma);

    return 0;

}