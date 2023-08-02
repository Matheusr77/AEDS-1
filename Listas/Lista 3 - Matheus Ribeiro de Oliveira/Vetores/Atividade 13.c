//Atividade 13

/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se
encontram o maior e o menor valor.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[5], menor, maior;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    menor = a[0];
    maior = a[0];
    
    for (int i = 0; i < 5; i++)
    {

        if (a[i] < menor)
        {
            menor = i;
        }

        if (a[i] > maior)
        {
            maior = i;
        }
        
    }

    printf("Vetor lido\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\nPosicao do maior: %d \nPosicao do menor: %d", maior, menor);




    return 0;

}