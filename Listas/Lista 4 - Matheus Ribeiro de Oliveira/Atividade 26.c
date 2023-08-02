//Atividade 26

/*Cifra de César*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char alfabeto[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char frase[300];
char resultado[300];

printf("\n============================================================\n");

printf("\nDigite uma frase que deseja criptografar: ");
fgets(frase, 300, stdin);

setbuf(stdin,NULL);

frase[strcspn(frase, "\n")] = 0;

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ')
        {
            resultado[i] = ' ';
        }

        else
        {  
            for (int j = 0; j < strlen(alfabeto); j++)
            {
                if (frase[i] == alfabeto[j])
                {
                    resultado[i] = alfabeto[j + 3];
                }
            }
        }
    }

printf("\n============================================================\n");

printf("\nA frase na Cifra de Cesar fica assim: \n\n");
printf("%s", resultado);

printf("\n\n============================================================\n\n");

    return 0;
}