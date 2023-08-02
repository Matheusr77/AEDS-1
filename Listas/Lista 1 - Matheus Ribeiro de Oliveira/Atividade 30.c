//Atividade 30

/*Faça um programa que recebe tres numeros e mostre-os em ordem crescente.*/

#include <stdio.h>

    int main () {

        int n1, n2, n3;

        printf("Digite um numero: ");
        scanf("%d", & n1);
        printf("Digite outro numero: ");
        scanf("%d", & n2);
        printf("Digite outro numero: ");
        scanf("%d", & n3);


        if (n1 < n2 && n1 < n3 && n2 < n3)
        {
            printf("A ordem crescente e: %d, %d, %d", n1, n2, n3);
        }
        
        else if (n1 < n2 && n1 < n3 && n3 < n2)
        {
            printf("A ordem crescente e: %d, %d, %d", n1, n3, n2);
        }

        else if (n2 < n1 && n2 < n3 && n1 < n3)
        {
            printf("A ordem crescente e: %d, %d, %d", n2, n1, n3);
        }

        else if (n2 < n1 && n2 < n3 && n3 < n1)
        {
            printf("A ordem crescente e: %d, %d, %d", n2, n3, n1);
        }

        else if (n3 < n1 && n3 < n2 && n2 < n1)
        {
            printf("A ordem crescente e: %d, %d, %d", n3, n2, n1);
        }

        else if (n3 < n1 && n3 < n2 && n1 < n2)
        {
            printf("A ordem crescente e: %d, %d, %d", n3, n1, n2);
        }


    return 0;
    }