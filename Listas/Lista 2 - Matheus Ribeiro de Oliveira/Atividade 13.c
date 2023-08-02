//Atividade 13

/*Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente.*/

#include <stdio.h>

int main () {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    for (int i = 0; i < num; i = i + 2)
    {
        printf("%d ", i);
    }

return 0;

}