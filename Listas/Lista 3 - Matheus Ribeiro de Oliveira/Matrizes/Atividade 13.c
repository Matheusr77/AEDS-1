//Atividade 13

/*Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme
a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os ele-
mentos acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat[4][4], transformada[4][4], cont = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           mat[i][j] = cont++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            transformada[i][j] = mat[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j > i)
            {
                transformada[i][j] = 0;
            }
            
        }
    }

    printf("\nMatriz original\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }

    printf("\nMatriz transformda\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", transformada[i][j]);
        }

        printf("\n");
    }

    return 0;

}