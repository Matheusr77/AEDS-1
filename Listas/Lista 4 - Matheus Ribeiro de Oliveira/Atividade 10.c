//Atividade 10

/*Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavra[20];

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    int tamanho = strlen(palavra);

    printf("Palavra de trás para frente: ");
    for (int i = tamanho - 2; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
