//Atividade 2

/*Crie um programa que calcula o comprimento de uma string (não use a função strlen).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char str[11];
int cont = -1;

printf("Digite uma string de ate 10 letras: ");
fgets(str, 11, stdin);

for (int i = 0; str[i] != '\0'; i++)
{
    cont++;
}

printf("\nEssa string possui %d caracteres", cont);

    return 0;
}
