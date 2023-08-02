//Atividade 28

/*Leia 10 numeros inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores  ́ımpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no maximo 10 elementos, mas nem todos os elementos são ̃
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int v[10], v1[10], v2[10], cont1 = 0, cont2 = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor v: ", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if(v[i] % 2 != 0)
        {
            v1[cont1] = v[i];
            cont1++;
        }

        else if (v[i] % 2 == 0)
        {
            v2[cont2] = v[i];
            cont2++;
        }
    }

    printf("\nElementos impares do v1\n");
    
    for (int i = 0; i < cont1; i++)
    {
        printf("%d ", v1[i]);   
    }

    printf("\nElementos pares do v2\n");
    
    for (int i = 0; i < cont2; i++)
    {
        printf("%d ", v2[i]);
        
    }
    
    return 0;

}