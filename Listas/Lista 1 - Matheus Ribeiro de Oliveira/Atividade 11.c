//Atividade 11

/*Escreva um programa que leia um número inteiro maior do que zero e devolva, na
tela, a soma de todos os seus algarismos. Por exemplo, ao número 2493 corresponderá
o valor 18 (2 + 4 + 9 + 3). Se o número lido não for maior do que zero, o programa
terminará com a mensagem “Número inválido”.*/

#include <stdio.h>

    int main () {

        int num, soma, algarismo;
        soma = 0;

        printf("Digite um numero inteiro: ");
        scanf("%d", & num);

        if (num <= 0)
        {
            printf("Numero invalido.");
            return 0;
        }
        
        while (num != 0)
        {
            algarismo = num % 10;
            soma = soma + algarismo;
            num = num / 10;
        }
        
        printf("A soma dos algarismos e: %d", soma);


    return 0;

    }


