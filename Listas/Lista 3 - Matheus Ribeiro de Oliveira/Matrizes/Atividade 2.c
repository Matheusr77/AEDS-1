//Atividade 2

/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat[5][5];

    printf("\nDigite 1 se a linha e a coluna for igual, se nao digite 0\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\nDigite um elemento da a linha %d e a coluna %d da matriz: ", i, j);
            scanf("%d",&mat[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mat[i][j]);
        }
        
            printf("\n");
    }
    
    return 0;

}