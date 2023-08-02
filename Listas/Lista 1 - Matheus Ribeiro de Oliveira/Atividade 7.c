//Atividade 7

/*Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem Números iguais.*/

#include <stdio.h>

    int main () {

        float n1, n2;

        printf("Digite um numero: ");
        scanf("%f", & n1);
        printf("Digite outro numero: ");
        scanf("%f", & n2);

        if (n1 > n2)
        {
            printf("O maior numero e %.1f.", n1);
        }

        else if (n2 > n1)
        {
            printf("O maior numero e %.1f.", n2);
        }
        
        else if (n1 == n2)
        {
            printf("Numeros iguais.");
        }


    return 0;

    }


