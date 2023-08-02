//Atividade 21

/*Faça um programa que receba do usuario dois vetores,  ́ A e B, com 10 numeros inteiros  ́
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/

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
       c[i] = a[i] - b[i]; 
    }

    printf("\nVetor C\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    

    return 0;

}