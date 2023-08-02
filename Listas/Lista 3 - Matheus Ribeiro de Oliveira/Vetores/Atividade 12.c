//Atividade 12

/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores
lidos juntamente com o maior, o menor e a média dos valores.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[5], menor, maior;
    float media = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    menor = a[0];
    maior = a[0];
    
    for (int i = 0; i < 5; i++)
    {
        media = media + a[i];

        if (a[i] < menor)
        {
            menor = a[i];
        }

        if (a[i] > maior)
        {
            maior = a[i];
        }
        
    }

    printf("Vetor lido\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    media = media / 5;

    printf("\nMedia do vetor: %.2f", media);
    printf("\nMaior: %d \nMenor: %d", maior, menor);
    
    return 0;

}