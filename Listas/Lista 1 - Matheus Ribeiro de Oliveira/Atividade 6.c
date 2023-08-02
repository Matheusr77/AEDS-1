//Atividade 6

/*Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.*/

#include <stdio.h>

    int main () {

        int n1, n2, dif;

        printf("Digite um numero: ");
        scanf("%d", & n1);
        printf("Digite outro numero: ");
        scanf("%d", & n2);

        if (n1 > n2)
        {
            dif = n1 - n2;
            printf("O maior numero e %d e a diferença entre ambos e %d.", n1, dif);
        }

        else if (n2 > n1)
        {
            dif = n2 - n1;
            printf("O maior numero e %d e a diferença entre ambos e %d.", n2, dif);
        }
        
    return 0;

    }


