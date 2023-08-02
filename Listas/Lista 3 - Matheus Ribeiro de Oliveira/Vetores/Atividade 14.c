//Atividade 14

/*Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais  ̃
e os escreva na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10], i, j;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 9; i++)
        for (int j = i+1; j < 10; j++)
            {
                if (a[i] == a[j])
                {
                    printf("\nOs valores iguais encontrados estao na posicao %d e %d do vetor.", i, j);
                }
                
            }
    

    return 0;

}