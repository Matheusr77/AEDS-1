//Atividade 15

/*Enunciado grande*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    char matriz[5][10], gabarito[10] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'};
    int resultado[5] = {0};

    printf("Digite as respostas dos alunos:\n");

    for (int i = 0; i < 5; i++) 
    {
        printf("Aluno %d: ", i+1);

        for (int j = 0; j < 10; j++) 
        {
            scanf(" %c", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if (matriz[i][j] == gabarito[j]) 
            {
                resultado[i]++;
            }
        }
    }

    printf("\nPontuacao dos alunos:\n");

    for (int i = 0; i < 5; i++) 
    {
        printf("Aluno %d: %d pontos\n", i+1, resultado[i]);
    }
    
    return 0;

}