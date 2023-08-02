//Atividade 8

/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>

int main () {

    int num, menor, maior, i = 0;

    printf("Digite um numero: ");
    scanf("%d", & num);

    maior = num;
    menor = num;

    while (i < 9)
    {
        printf("Digite um numero: ");
        scanf("%d", & num);
        
        if (num < menor)
        {
            menor = num;
        }

        if (num > maior)
        {
            maior = num;
        }

        i++;

    }
    
    printf("Maior valor lido: %d \nMenor valor lido: %d", maior, menor);


return 0;

}