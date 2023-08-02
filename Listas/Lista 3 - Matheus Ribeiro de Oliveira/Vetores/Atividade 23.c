//Atividade 23

/*Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto  ́
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o ˆ
produto escalar, sendo que o produto escalar e dado por:  ́ x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.*/

#include <stdio.h>

#define N 5

int main() {
    float x[N], y[N], produto_escalar = 0.0;

    printf("Digite os valores do vetor x:\n");

    for (int i = 0; i < N; i++) 
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }

    printf("\nDigite os valores do vetor y:\n");

    for (int i = 0; i < N; i++) 
    {
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    for (int i = 0; i < N; i++) 
    {
        produto_escalar += x[i] * y[i];
    }

    printf("\nVetor x: ");

    for (int i = 0; i < N; i++) 
    {
        printf("%.2f ", x[i]);
    }

    printf("\nVetor y: ");

    for (int i = 0; i < N; i++) 
    {
        printf("%.2f ", y[i]);
    }
    
    printf("\nProduto escalar: %.2f", produto_escalar);

    return 0;
}
