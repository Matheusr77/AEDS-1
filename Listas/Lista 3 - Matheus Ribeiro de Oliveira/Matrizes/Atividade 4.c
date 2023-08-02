//Atividade 4

/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do 
maior valor.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat[4][4], maior, linha = 0, coluna = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nDigite um elemento para a linha %d e a coluna %d da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    maior = mat[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (maior < mat[i][j])
            {
                maior = mat[i][j];
                linha = i;
                coluna = j;
            }
        } 
    }

    printf("\nO maior elemento desta matriz e %d que esta na linha %d e na coluna %d.", maior, linha, coluna);

    return 0;

}