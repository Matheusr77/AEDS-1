//Atividade 29

/*Faça um programa que receba 6 números inteiros e mostre:
• Os números pares digitados; 
• A soma dos numeros pares digitados;
• Os numeros ímpares digitados;
• A quantidade de numeros ímpares digitados;*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[6], par = 0, cont = 0;
        
    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor para a posicao %d do vetor v: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nNumeros pares digitados\n");

    for (int i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
            par = par + a[i];
        }
    }

    printf("\nSoma dos numeros pares\n");
    printf("%d", par);

    printf("\nNumeros impares digitados\n");
    
    for (int i = 0; i < 6; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
            cont++;
        }
    }

    printf("\nFoi digitado %d numeros impares\n", cont);

    return 0;

}