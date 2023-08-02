//Atividade 38

/*Peça ao usuario para digitar dez valores numéricos e ordene por ordem crescente esses  ́
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j;
    float temp, valor, vetor[10];

    for (i = 0; i < 10; i++) 
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valor);
        vetor[i] = valor;

        for (j = 0; j < i; j++) 
        {
            if (vetor[i] < vetor[j]) 
            {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Valores em ordem crescente:\n");

    for (i = 0; i < 10; i++) 
    {
        printf("%.1f ", vetor[i]);
    }

    printf("\n");

    return 0;
}
