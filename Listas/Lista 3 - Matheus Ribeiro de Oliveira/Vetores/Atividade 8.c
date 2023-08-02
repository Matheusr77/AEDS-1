//Atividade 8

/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um elemento para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOrdem inversa do vetor\n");

    for (int i = 5; i > -1; i--)
    {
        printf("%d ", a[i]);
    }
    

    return 0;

}