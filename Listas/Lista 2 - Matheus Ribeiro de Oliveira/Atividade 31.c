//Atividade 31

/*Faça um programa que calcule e escreva o valor de S

S = 1/1 + 3/2 + 5/3 + 7/4 ... 99/50*/

#include <stdio.h>

int main () {

    int i;
    double soma = 0.0;

    for (i = 1; i <= 50; i++) {
        soma += (2.0 * i - 1.0) / i;
    }

    printf("O valor de S e: %.2f\n", soma);


return 0;

}