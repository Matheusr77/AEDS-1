//Atividade 5

/*Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10], par = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        if (a[i] % 2 == 0)
        {
            par++;
        }
    }
    
    printf("\nEste vetor possui %d valores pares.", par);

    return 0;
}
