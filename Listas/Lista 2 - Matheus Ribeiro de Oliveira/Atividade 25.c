//Atividade 25

/*Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos  ́
de 3 ou 5.*/

#include <stdio.h>

int main () {

    int i = 1, soma = 0;

    while (i < 1000)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            soma = soma + i;
        }
        i++;
    }
    
    printf("A soma dos multiplos de 3 e 5 abaixo de 1000 e: %d", soma);

return 0;

}