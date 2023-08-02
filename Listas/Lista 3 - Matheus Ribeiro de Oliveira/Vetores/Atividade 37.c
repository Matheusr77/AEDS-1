//Atividade 37

/*Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >
· · · > A11, ou seja, esta ordenado em ordem crescente até o sexto elemento, e a partir  ́
desse elemento esta ordenado em ordem decrescente. Dado o vetor da questão anterior,  ̃
proponha um algoritmo para ordenar os elementos.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j;
    float temp;
    float vetor[11] = {1, 2, 3, 4, 5, 6, 11, 10, 9, 8, 7};

    for (i = 6; i < 10; i++) 
    {
        for (j = i + 1; j < 11; j++) 
        {
            if (vetor[j] > vetor[i]) 
            {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Vetor ordenado:\n");

    for (i = 0; i < 11; i++) 
    {
        printf("%.2f ", vetor[i]);
    }

    printf("\n");

    return 0;
}
