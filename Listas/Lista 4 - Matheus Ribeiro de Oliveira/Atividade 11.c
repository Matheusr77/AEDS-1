//Atividade 11

/*Faça um programa que receba do usuário uma string. O programa imprime a string
sem suas vogais.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char str[20];

printf("Digite uma palavra: ");
fgets(str, 20, stdin);

printf("\nA palavra sem as vogais fica assim:\n");

    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') 
    {
            printf("%c", str[i]);
    }

    return 0;
}