//Atividade 52

/*Escreva um programa em c que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor serao necessarias para atender ao  ́
saque com a menor quantidade de notas possıvel. Serao utilizadas notas de 100, 50,  ̃
20, 10, 5, 2 e 1 real.*/

#include <stdio.h>

int main() {
    int valor, nota, qtde;
    int valor_original;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    valor_original = valor; // Armazena o valor original

    printf("\nNotas necessarias:\n");

    nota = 100;
    qtde = valor / nota;
    if (qtde > 0) {
        printf("%d nota(s) de R$ %d\n", qtde, nota);
    }
    valor -= qtde * nota;

    nota = 50;
    qtde = valor / nota;
    if (qtde > 0) {
        printf("%d nota(s) de R$ %d\n", qtde, nota);
    }
    valor -= qtde * nota;

    nota = 20;
    qtde = valor / nota;
    if (qtde > 0) {
        printf("%d nota(s) de R$ %d\n", qtde, nota);
    }
    valor -= qtde * nota;

    nota = 10;
    qtde = valor / nota;
    if (qtde > 0) {
        printf("%d nota(s) de R$ %d\n", qtde, nota);
    }
    valor -= qtde * nota;

    nota = 5;
    qtde = valor / nota;
    if (qtde > 0) {
        printf("%d nota(s) de R$ %d\n", qtde, nota);
    }
    valor -= qtde * nota;

    nota = 2;
    qtde = valor / nota;
    if (qtde > 0) {
        printf("%d nota(s) de R$ %d\n", qtde, nota);
    }
    valor -= qtde * nota;

    nota = 1;
    qtde = valor / nota;
    if (qtde > 0) {
        printf("%d nota(s) de R$ %d\n", qtde, nota);
    }
    valor -= qtde * nota;

    return 0;
}




