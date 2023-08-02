//Atividade 15

/*Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas
em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e
90.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char cadeia[100];

    printf("Digite uma cadeia de caracteres em letras maiusculas: ");
    fgets(cadeia, 100, stdin);

    for (int i = 0; i < strlen(cadeia); i++) 
    {
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') 
        {
            cadeia[i] = cadeia[i] + 32;
        }
    }

    printf("A cadeia de caracteres em letras minusculas é: %s\n", cadeia);

    return 0;
}
