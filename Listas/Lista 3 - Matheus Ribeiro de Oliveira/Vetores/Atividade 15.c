//Atividade 15

/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele-  ́
mentos repetidos.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[20], b[20], i, j, cont = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 20; i++)
    {
        int rep = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                rep = 1;
                break;
            }
        }
        if (!rep)
        {
            b[cont] = a[i];
            cont++;
        }
    }

    printf("\nElementos do vetor sem repeticao:\n");

    for (int i = 0; i < cont; i++)
    {
        printf("%d ", b[i]);
    }
    
    return 0;

}
