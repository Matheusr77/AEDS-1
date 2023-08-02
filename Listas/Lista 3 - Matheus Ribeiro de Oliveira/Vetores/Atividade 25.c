//Atividade 25

/*Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros natu-
rais que nao são múltiplos de 7 ou que terminam com 7.  ́*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[100];
    int i = 1, cont = 0;

    while (cont < 100) {
        if (i % 7 != 0 && i % 10 != 7) {
            a[cont] = i;
            cont++;
        }
        i++;
    }

    printf("Vetor com os 100 primeiros naturais que nao sao multiplos de 7 ou terminam com 7:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

