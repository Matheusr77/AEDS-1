//Atividade 9

/*Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os
valores lidos na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[6];

    for (int i = 0; i < 6; i++)
    {
        do
        {
        printf("Digite um elemento para o vetor: ", i);
        scanf("%d", &a[i]); 
        } while (a[i] % 2 != 0);
        
    }

    printf("\nOrdem inversa do vetor\n");

    for (int i = 5; i > -1; i--)
    {
        printf("%d ", a[i]);
    }
    




    return 0;

}