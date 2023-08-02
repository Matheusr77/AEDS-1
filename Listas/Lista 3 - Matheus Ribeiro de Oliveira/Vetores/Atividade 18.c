//Atividade 18

/*Faça um programa que leia um vetor de 10 numeros. Leia um número x. Conte os
multiplos de um número inteiro x num vetor e mostre-os na tela.*/

#include <stdio.h>

int main() {
    int a[10];
    int x, cont = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nDigite um numero x: ");
    scanf("%d", &x);

    printf("\nMultiplos de %d encontrados no vetor:\n", x);
    for (int i = 0; i < 10; i++) {
        if (a[i] % x == 0) 
        {
            printf("%d ", a[i]);
            cont++;
        }
    }

    if (cont == 0) 
    {
        printf("Nenhum multiplo de %d encontrado no vetor.\n", x);
    }

    return 0;
}
