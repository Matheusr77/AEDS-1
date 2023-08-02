//Atividade 24

/*Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores  ́
desse numero, com exceção dele próprio. Ex: a soma dos divisores do número 66  ́é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

#include <stdio.h>

int main () {

    int num, soma = 0, div = 1, cont = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    while (cont < num)
    {
        if (num % div == 0)
        {
            soma = soma + div;
            printf("%d ", div);
        }
        div++;
        cont++;
    }
    
    printf("\nA soma dos divisores e: %d", soma);

return 0;

}