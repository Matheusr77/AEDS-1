//Atividade 9

/*Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string
por outro caractere ‘1’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char str[11];

printf("Digite no maximo 10 numeros: ");
fgets(str, 11, stdin);

for (int i = 0; i < 11; i++)
{
    if (str[i] == '0')
    {
        str[i] = '1';
    }
    
}

printf("A nova string e: %s", str);

    return 0;
}