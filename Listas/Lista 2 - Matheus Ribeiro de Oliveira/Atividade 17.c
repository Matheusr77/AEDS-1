//Atividade 17

/*Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais.*/

#include <stdio.h>

int main () {

    int num, soma;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", & num);

    for (int i = 0; i <= num; i++)
    {
        soma = soma + i;
    }
    
    printf("A soma e: %d", soma);

return 0;

}