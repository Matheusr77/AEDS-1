//Atividade 11

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/

#include <stdio.h>

int main () {

    int num, cont = -1;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    while (cont < num)
    {
        cont++;
        printf("%d ", cont);
    }

return 0;

}