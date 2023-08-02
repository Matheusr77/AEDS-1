//Atividade 21

/*Faça um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as letras A por *.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase1[100];
    char frase2[100];
    char temp;
    int tamanho1, tamanho2;
    int i, j;

    printf("Digite a primeira frase: ");
    fgets(frase1, 100, stdin);

    printf("Digite a segunda frase: ");
    fgets(frase2, 100, stdin);

    tamanho1 = strlen(frase1);

    for (i = 0, j = tamanho1 - 2; i < j; i++, j--) 
    {
        temp = frase1[i];
        frase1[i] = frase1[j];
        frase1[j] = temp;
    }

    tamanho2 = strlen(frase2);

    for (i = 0, j = tamanho2 - 2; i < j; i++, j--) 
    {
        temp = frase2[i];
        frase2[i] = frase2[j];
        frase2[j] = temp;
    }

    for (i = 0; i < tamanho1 - 1; i++) 
    {
        if (frase1[i] == 'A') 
        {
            frase1[i] = '*';
        }
    }

    for (i = 0; i < tamanho2 - 1; i++) 
    {
        if (frase2[i] == 'A') 
        {
            frase2[i] = '*';
        }
    }

    printf("Frase 1 invertida: %s\n", frase1);
    printf("Frase 2 invertida: %s\n", frase2);

    return 0;
}
