//Atividade 18

/*Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra
L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char palavra[20];
char l1, l2;

printf("Digite uma palavra: ");
fgets(palavra, 20, stdin);

printf("\nDigite uma letra da palavra para ser trocada: ");
scanf("%c", &l1);
printf("\nDigite uma letra para ocupar o lugar da outra letra: ");
scanf("%c", &l2);

for (int i = 0; i < strlen(palavra); i++)
{
    if (palavra[i] == l1)
    {
        palavra[i] = l2;
    }
    
}

printf("\nA nova palavra ficara assim : %s", palavra);

    return 0;
}