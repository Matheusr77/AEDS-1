//Atividade 14

/*Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor
ASCII de cada caractere da palavra. Imprima a string resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavra[51];

    printf("Digite uma palavra (máximo de 50 letras): ");
    fgets(palavra, 51, stdin);

    for (int i = 0; i < strlen(palavra); i++) {
        palavra[i] = palavra[i] + 1;
    }

    printf("A string resultante é: %s\n", palavra);

    return 0;
}

