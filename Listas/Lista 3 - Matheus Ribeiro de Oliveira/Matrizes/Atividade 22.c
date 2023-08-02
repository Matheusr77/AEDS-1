//Atividade 22

/*Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    printf("Digite os elementos da matriz A:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            C[i][j] = 0;

            for (k = 0; k < 3; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultado da multiplicacao:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", C[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
