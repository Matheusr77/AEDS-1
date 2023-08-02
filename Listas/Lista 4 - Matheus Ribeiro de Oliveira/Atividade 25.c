//Atividade 25

/*Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem
alfabetica.  ́ Dica: ‘a’ e menor do que ‘b’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, 100, stdin);

    palavra1[strcspn(palavra1, "\n")] = '\0';

    printf("Digite a segunda palavra: ");
    fgets(palavra2, 100, stdin);

    palavra2[strcspn(palavra2, "\n")] = '\0';

    int resultado = strcmp(palavra1, palavra2);

    if (resultado < 0) 
    {
        printf("A palavra '%s' vem antes de '%s' na ordem alfabética.\n", palavra1, palavra2);
    } 
    
    else if (resultado > 0) 
    {
        printf("A palavra '%s' vem depois de '%s' na ordem alfabética.\n", palavra1, palavra2);
    } 
    
    else 
    {
        printf("As palavras '%s' e '%s' são iguais na ordem alfabética.\n", palavra1, palavra2);
    }

    return 0;
}
