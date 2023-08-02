//Atividade 3

/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
dos componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos
têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10], b[10]; 

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        b[i] = a[i] * a[i];
    }

    printf("\nArranjo A\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArranjo B\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    
    


    return 0;

}