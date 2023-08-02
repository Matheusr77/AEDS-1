//Atividade 30

/*Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que  ́
estao em ambos os vetores. Não deve conter números repetidos.  ́*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor1[10], vetor2[10], intersecao[10];
    int tamanho = 0;

    printf("Digite os elementos do primeiro vetor:\n");

    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os elementos do segundo vetor:\n");

    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &vetor2[i]);
    }

 
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if (vetor1[i] == vetor2[j]) 
            {
                int repetido = 0;
                
                for (int k = 0; k < tamanho; k++) 
                {
                    if (vetor1[i] == intersecao[k]) 
                    {
                        repetido = 1;
                        break;
                    }
                }
                
                if (!repetido) 
                {
                    intersecao[tamanho] = vetor1[i];
                    tamanho++;
                }
                break;
            }
        }
    }

    printf("\nA intersecao entre os dois vetores eh:\n");

    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", intersecao[i]);
    }

    return 0;
}
