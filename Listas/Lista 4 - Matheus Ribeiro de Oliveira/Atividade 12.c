//Atividade 12

/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u)
possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as
vogais da palavra dada por esse caractere.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavra[100];
    char caractere;
    int vogais = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    printf("Digite um caractere para substituir as vogais: ");
    scanf("%c", &caractere);

    for (int i = 0; i < strlen(palavra); i++) 
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') 
        {
            vogais++;
            palavra[i] = caractere;
        }
    }

    printf("\nA palavra com todas as vogais substituídas por '%c' fica assim: %s", caractere, palavra);
    printf("\nA palavra possui %d vogais.\n", vogais);

    return 0;
}
