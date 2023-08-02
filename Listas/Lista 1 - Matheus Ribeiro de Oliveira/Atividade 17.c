//Atividade 17

/*Faça um programa que calcule e mostre a area de um trapézio. Sabe-se que:  ́

A = (basemaior + basemenor) ∗ altura / 2

Lembre-se a base maior e a base menor devem ser numeros maiores que zero.  */

#include <stdio.h>

    int main () {

        float maior, menor, altura, area;

        printf("Digite a base maior do trapezio: ");
        scanf("%f", & maior);
        printf("Digite a base menor do trapezio: ");
        scanf("%f", & menor);
        printf("Digite a altura do trapezio: ");
        scanf("%f", & altura);

        area = ((maior + menor) * altura) / 2;

        printf("A area do trapezio e: %.2f", area);

    return 0;

    }