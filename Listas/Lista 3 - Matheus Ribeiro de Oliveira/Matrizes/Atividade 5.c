//Atividade 5

/*Leia uma matriz 5 x 5. Leia tambem um valor X. O programa devera fazer uma busca  ́
desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensa-  ̃
gem de “nao encontrado”.  ̃*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int mat[5][5], linha = -1, coluna = -1, x;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite um elemento para a linha %d e a coluna %d da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nDigite qual valor deseja localizar na matriz: ");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (x == mat[i][j])
            {
                linha = i;
                coluna = j;
            }
        }
    }

    if (linha == -1 || coluna == -1)
    {
        printf("\nValor nao encontrado.");
    }
    
    printf("\nO numero %d esta localizado na linha %d e na coluna %d.", x, linha, coluna);

    return 0;

}