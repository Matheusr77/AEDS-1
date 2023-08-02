//Atividade 14

/*Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem decrescente.*/

#include <stdio.h>

int main () {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    for (int i = num; i > 0; i = i - 2)
    {
        printf("%d ", i);
    }

return 0;

}