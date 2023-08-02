//Atividade 15

/*Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números
ímpares de 1 até N em ordem crescente.*/

#include <stdio.h>

int main () {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    if (num % 2 == 0)
    {
        printf("Numero invalido.");
    }
        
    else
    {
        for (int i = 1; i < num; i = i + 2)
        {
            printf("%d ", i);
        }
    
    }


return 0;

}