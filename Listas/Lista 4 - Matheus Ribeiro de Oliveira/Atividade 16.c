//Atividade 16

/*Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica:
subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char cadeia[100];

printf("Digite uma frase em minusculo: ");
fgets(cadeia, 100, stdin);

    for (int i = 0; i < strlen(cadeia); i++) 
    {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') 
        {
            cadeia[i] = cadeia[i] - 32;
        }
    }

   printf("A cadeia de caracteres em maiúsculo é: %s\n", cadeia);
   
    return 0;
}