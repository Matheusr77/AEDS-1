//Atividade 4

/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
. O número digitado ao quadrado
. A raiz quadrada do número digitado*/

#include <stdio.h>
#include <math.h>

    int main () {

        int n1, quadrado, raiz;

        printf("Digite um numero: ");
        scanf("%d", & n1);

        if (n1 > 0)
        {
            quadrado = n1 * n1;
            raiz = sqrt(n1);
            printf("Este numero ao quadrado e sua raiz sao respectivamente: %d e %d", quadrado, raiz);
        }

        else
        {
            printf("Este numero e invalido");
        }
        
    return 0;
    
    }



