//Atividade 11

/*Faça um programa que preencha um vetor com 10 números reais, calcule e
mostre a quantidade de números negativos e a soma dos números positivos desse
vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10], soma = 0, negativo = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            negativo++;
        }

    else 
    {
        soma = soma + a[i];
    }
           
    }

    printf("\nEste vetor tem %d numeros negativos.", negativo);
    printf("\nA soma dos elementos deste vetor e: %d", soma);

    return 0;

}