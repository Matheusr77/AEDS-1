//Atividade 27

/*Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos  ́
que sao primos e suas respectivas posções no vetor.  ̃*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor a: ", i);
        scanf("%d", &a[i]);
    }

        for (int i = 0; i < 10; i++) 
        {

        int primo = 1;

            for (int j = 2; j <= a[i] / 2; j++) 
            {
                if (a[i] % j == 0) 
                {
                    primo = 0;
                    break;
                }
            }

            if (primo == 1 && a[i] != 1) 
            {
                printf("O numero %d na posicao %d e primo.\n", a[i], i);
            }
    }
    


    return 0;

}