//Atividade 7

/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

 int a[10], maior, posicao = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    maior = a[0];
    
    for (int i = 0; i < 10; i++)
    {


        if (a[i] > maior)
        {
            maior = a[i];
            posicao = i;
        }
        
    }

    printf("\nMaior elemnto: %d \nPosicao deste elemneto no vetor: %d", maior, posicao);


    return 0;

}