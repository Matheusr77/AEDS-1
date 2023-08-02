//Atividade 1

/*Faça um programa que leia uma string e a imprima.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char str[11];

printf("Digite uma string de ate 10 caracteres: ");
fgets(str, 11, stdin);

printf("\nA string digitada foi : %s", str);

    return 0;
}