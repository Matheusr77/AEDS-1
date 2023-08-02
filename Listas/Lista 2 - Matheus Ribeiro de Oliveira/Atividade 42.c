//Atividade 42

/*Faça um programa que leia um conjunto nao determinado de valores, um de cada vez, e  ̃
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <math.h>

int main () {

    int num, quadrado, cubo, raiz;

    while (1)
    {
        printf("\nDigite um valor: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            break;
        }

        quadrado = pow(num, 2);
        cubo = pow(num, 3);
        raiz = sqrt(num);

    printf("Quadrado: %d \nCubo: %d \nRaiz: %d", quadrado, cubo, raiz);
        
    }
    
   // printf("Quadrado: %d \nCubo: %d \nRaiz: %d", quadrado, cubo, raiz);

return 0;

}