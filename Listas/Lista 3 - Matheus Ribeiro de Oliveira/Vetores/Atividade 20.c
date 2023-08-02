//Atividade 20

/*Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um  ́
vetor com 10 posições. Preencha um segundo vetor apenas com os números ímpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/

#include <stdio.h>

int main() {
    int a[10], b[10];
    int i, j = 0;

    printf("Digite 10 numeros inteiros no intervalo [0, 50]: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);

        if (a[i] >= 0 && a[i] <= 50) {
            
            if (a[i] % 2 != 0) 
            {
                b[j] = a[i];
                j++;
            }
        } 
        
        else 
        {
            printf("Numero fora do intervalo [0, 50]. Digite novamente.\n");
            i--;
        }
    }

    printf("\nVetor 1:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", a[i]);

        if ((i+1) % 2 == 0) 
        printf("\n");
    }

    printf("\nVetor 2 (apenas numeros impares):\n");
    for (i = 0; i < j; i++) 
    {
        printf("%d ", b[i]);

        if ((i+1) % 2 == 0) 
        printf("\n");
    }

    return 0;
}




















/*#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10], b[10];

    printf("\nDigite valores entre 0 e 50 no programa abaixo.\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }
    


    return 0;

}*/