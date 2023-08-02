//Atividade 12

/*Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat[3][3], transposta[3][3];

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
           transposta[j][i] = mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transposta[i][j]);
        }

        printf("\n");
    }    

    return 0;

}