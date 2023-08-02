//Atividade 28

/*Construa um programa que leia duas strings fornecidas pelo usuario e verifique se a se-  ́
gunda string lida esta contida no final da primeira, retornando o resultado da verificação.  ̃*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, 100, stdin);

    string1[strcspn(string1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(string2, 100, stdin);

    string2[strcspn(string2, "\n")] = '\0';

    int tam1 = strlen(string1);
    int tam2 = strlen(string2);

    int contido = 1;
    int i, j;

    for (i = tam1 - tam2, j = 0; i < tam1; i++, j++) 
    {
        if (string1[i] != string2[j]) 
        {
            contido = 0;
            break;
        }
    }

    if (contido) 
    {
        printf("A segunda string está contida no final da primeira.\n");
    } 
    
    else 
    {
        printf("A segunda string não está contida no final da primeira.\n");
    }

    return 0;
}
