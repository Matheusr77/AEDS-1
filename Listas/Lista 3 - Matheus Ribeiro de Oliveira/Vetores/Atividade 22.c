//Atividade 22

/*Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo,  ̃
nas posições pares os valores do primeiro e nas posições impares os valores do se-  ̃
gundo.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10], b[10], c[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor a: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor b: ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = a[i];
        }
        
        else if (i % 2 != 0)
        {
            c[i] = b[i];
        }
        
    }
    
    printf("\nVetor C\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;

}