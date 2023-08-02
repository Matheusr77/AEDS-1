//Atividade 7

/*Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma:  ̃
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i^2 − 1 se i = j;
A[i][j] = 4i^3 − 5j^2 + 1 se i > j.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int mat[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j)
            {
                mat[i][j] = 2 * i + 7* j;
            }

            else if (i == j)
            {
                mat[i][j] = 3 * pow(i, 2) - 1;
            }

            else if (i > j)
            {
                mat[i][j] = 4 * pow(i, 3) - 5 * pow(j, 2) + 1;
            }    
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }


    return 0;

}