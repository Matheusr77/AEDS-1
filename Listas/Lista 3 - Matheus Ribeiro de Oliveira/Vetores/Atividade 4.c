//Atividade 4

/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas posições
X e Y .*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[8], x = 0, y = 0, soma = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um numero para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nAgora escolha duas posicoes do vetor para somar estes valores.\n");
    printf("\nPrimeira posicao:");
    scanf("%d", &x);
    printf("\nSegunda posicao:");
    scanf("%d", &y);   

    for (int i = 0; i < 8; i++)
    {
        if (x == i)
        {
            soma = a[i];
        }

        if (y == i)
        {
            soma = soma + a[i];
        }
        
    }

    printf("\nA soma dos valores das posicoes %d e %d e: %d", x, y, soma);
    

    return 0;

}