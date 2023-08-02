//Atividade 8

/*Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char str[11];
int cont = 0;

printf("Digite no maximo 10 numeros: ");
fgets(str, 11, stdin);

for (int i = 0; i < 11; i++)
{
    if (str[i] == '1')
    {
        cont++;
    }
    
}

printf("\nO numero 1 apareceu %d vezes", cont);

    return 0;
}