//Atividade 17

/*Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
valores negativos.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
        
    }
    
    printf("\nVetor sem valores negativos.\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;

}