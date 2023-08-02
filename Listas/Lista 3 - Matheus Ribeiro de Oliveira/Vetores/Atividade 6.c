//Atividade 6

/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
deverá ser impresso o maior e o menor elemento do vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10], menor, maior;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }
    
    maior = a[0];
    menor = a [0];
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < menor)
        {
            menor = a[i];
        }

        if (a[i] > maior)
        {
            maior = a[i];
        }
        
    }

    printf("\nMaior: %d \nMenor: %d", maior, menor);
    
    return 0;

}