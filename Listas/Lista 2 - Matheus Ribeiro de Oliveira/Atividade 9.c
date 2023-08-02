//Atividade 9

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.*/

#include <stdio.h>

int main () {

    int num, cont = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    while (cont < num)
    {
        cont++;

        if (cont % 2 != 0)
        {
            printf("%d ", cont);
        }

    }


return 0;

}