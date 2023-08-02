//Atividade 10

/*Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int nota[15];
    float media = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digita a nota do aluno %d: ", i);
        scanf("%d", &nota[i]);
    }
    
    for (int i = 0; i < 15; i++)
    {
        media = media + nota[i];
    }
    
    media = media / 15;

    printf("A media das notas e: %.2f", media);


    return 0;

}