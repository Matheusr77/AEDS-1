//Atividade 26

/*Faça um programa que calcule o desvio padrao de um vetor v contendo n = 10 numeros,  ́
onde m é a media do vetor.  ́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 10;
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float m = 0, soma = 0, desvio = 0;

    for (int i = 0; i < n; i++) 
    {
        m += v[i];
    }

    m /= n;

    for (int i = 0; i < n; i++) 
    {
        soma += pow(v[i] - m, 2);
    }

    desvio = sqrt(soma / n);

    printf("O desvio padrao do vetor v eh: %f\n", desvio);

    return 0;
}
