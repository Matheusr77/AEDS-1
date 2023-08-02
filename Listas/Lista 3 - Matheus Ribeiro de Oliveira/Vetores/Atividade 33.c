//Atividade 33

/*Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as  ̃
posições com valor zero. Para isso, todos os elementos a frente do valor zero, devem ser `
movidos uma posição para tras no vetor.  ́*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[15], cont = -1;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um valor para a posicao %d do vetor v: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        if (a[i] == 0 && cont == -1)
        {
            cont = i;
        }

        else if (a[i] != 0 && cont != -1)
        {
            a[cont++] = a[i];
            a[i] = 0;
        }
        
    }
    
    printf("\nVetor sem os zeros\n");

    for (int i = 0; i < 15; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;

}