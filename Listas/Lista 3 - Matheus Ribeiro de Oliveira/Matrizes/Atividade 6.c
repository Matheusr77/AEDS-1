//Atividade 6

/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição ̃
das matrizes lidas.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat1[4][4], mat2[4][4], mat3[4][4];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite um elemento para a linha %d e a coluna %d da matriz 1: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite um elemento para a linha %d e a coluna %d da matriz 2: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat1[i][j] > mat2[i][j] )
            {
                mat3[i][j] = mat1[i][j];
            }

            else if (mat2[i][j] > mat1[i][j])
            {
                mat3[i][j] = mat2[i][j];
            } 
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        
        printf("\n");
    }


    return 0;

}