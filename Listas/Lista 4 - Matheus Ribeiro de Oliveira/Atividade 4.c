//Atividade 4

/*Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nome[11];

printf("Digite o seu primeiro nome: ");
fgets(nome, 11, stdin);

printf("\nAs 4 primeiras letras do seu nome e: ");

for (int i = 0; i < 4 && nome[i] != '\0'; i++)
{
    printf("%c ", nome[i]);
}

    return 0;
}