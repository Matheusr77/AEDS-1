//Atividade 35

/*Faça um programa que leia dois números a e b (positivos menores que 10000) e:
• Crie um vetor onde cada posição é um algarismo do número. A primeira posição é ́
o algarismo menos significativo;
• Crie um vetor que seja a soma de a e b, mas faça-o usando apenas os vetores
construídos anteriormente.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, i, cont = 0;
    int vetA[4] = {0}, vetB[4] = {0}, vetSoma[4] = {0};

    printf("Digite dois numeros positivos menores que 10000: ");
    scanf("%d %d", &a, &b);

    for (i = 0; i < 4; i++) 
    {
        vetA[i] = a % 10;
        a /= 10;
    }

    for (i = 0; i < 4; i++) 
    {
        vetB[i] = b % 10;
        b /= 10;
    }

    for (i = 0; i < 4; i++) 
    {
        vetSoma[i] = vetA[i] + vetB[i] + cont;

        if (vetSoma[i] >= 10) 
        {
            cont = 1;
            vetSoma[i] %= 10;
        } 

        else 
        {
            cont = 0;
        }
    }

    printf("Resultado da soma: ");

    for (i = 3; i >= 0; i--) 
    {
        printf("%d", vetSoma[i]);
    }
    
    printf("\n");

    return 0;
}
