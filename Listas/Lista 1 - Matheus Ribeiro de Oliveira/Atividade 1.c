//Atividade 1

/*Faça um programa que receba dois números e mostre qual deles é o maior.*/

#include <stdio.h>

    int main () {

        float n1, n2;

        printf("Digite um numero: ");
        scanf("%f", & n1);
        printf("Digite outro numero: ");
        scanf("%f", & n2);

        if (n1 > n2)
        {
            printf("%.2f e o maior numero.", n1);
        }  

        else if (n2 > n1)
        {
            printf("%.2f e o maior numero.", n2);
        }
        
    return 0;

    }






