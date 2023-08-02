//Atividade 55

/*Escreva um programa que leia um inteiro nao negativo n e imprima a soma dos n primei-
ros numeros primos.  ́*/

#include <stdio.h>

int main () {

    int n, count = 0, soma = 0;
    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    for (int i = 2; count < n; i++) {
        int primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        
        if (i == 2 || i == 3 || primo == 1) {
            count++;
            soma = soma + i;
        }
    }

    printf("A soma dos %d primeiros numeros primos é %d.\n", n, soma);

return 0;

}