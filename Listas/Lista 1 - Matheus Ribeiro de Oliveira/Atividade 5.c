//Atividade 5

/*Faça um programa que receba um número inteiro e verifique se este número é par
ou ímpar.*/

#include <stdio.h>

    int main () {

        int n1;

        printf("Digite um numero para verificar se ele e impar ou par: ");
        scanf("%d", & n1);

        if (n1 % 2 == 0)
        {
            printf("Este numero e par.");
        }
        
        else
        {
            printf("Este numero e impar.");
        }
        

    return 0;

    }



