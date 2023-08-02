//Atividade 31

/*Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao ̃
entre os 2 vetores anteriores, ou seja, que contem os números dos dois vetores. Não ̃
deve conter numeros repetidos.  ́*/

#include <stdio.h>

int main() {

    int v1[10], v2[10], v3[20];
    int i, j, k, cont;

 
    printf("Digite os elementos do vetor 1:\n");

    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do vetor 2:\n");

    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < 10; i++) 
    {
        v3[i] = v1[i];
    }

    k = 10;

    for(i = 0; i < 10; i++) 
    {
        cont = 1;

        for(j = 0; j < 10; j++) 
        {
            if(v2[i] == v1[j]) 
            {
                cont = 0;
                break;
            }
        }

        if(cont) 
        {
            v3[k] = v2[i];
            k++;
        }
    }

    printf("\nUniao dos vetores:\n");

    for(i = 0; i < k; i++) 
    {
        printf("%d ", v3[i]);
    }
    
    printf("\n");

    return 0;
}
