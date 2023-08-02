//Atividade 23

/*Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A^2*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int A[3][3], B[3][3], i, j, k, sum;

    printf("Digite os valores da matriz A:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            sum = 0;

            for (k = 0; k < 3; k++) 
            {
                sum += A[i][k] * A[k][j];
            }

            B[i][j] = sum;
        }
    }

    printf("\nA matriz B = A² eh:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", B[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
