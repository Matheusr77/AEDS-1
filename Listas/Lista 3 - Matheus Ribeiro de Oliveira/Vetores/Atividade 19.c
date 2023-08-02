//Atividade 19

/*Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 ∗ i)%(i + 1), sendo
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.  ̃*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[50];

    for (int i = 0; i < 50; i++)
    {
        a[i] = (i + 5 * i) % (i + 1);
    }

    printf("\nVetor com os novos valores\n");

    for (int i = 0; i < 50; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;

}