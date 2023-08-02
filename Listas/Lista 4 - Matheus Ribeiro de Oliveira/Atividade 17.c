//Atividade 17

/*Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar
os espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char frase[100];
char resultante[100];

printf("Digite uma frase: ");
fgets(frase, 100, stdin);

for (int i = 0; i < 100; i++)
{
    if (frase[i] != ' ')
    {
        resultante[i] = frase[i];
    }
    
}

printf("Resultante: %s", resultante);

    return 0;
}