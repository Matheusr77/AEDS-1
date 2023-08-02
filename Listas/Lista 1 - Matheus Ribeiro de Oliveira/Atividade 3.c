//Atividade 3

/*Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o número ao quadrado.*/

#include <stdio.h>
#include <math.h>

    int main () {

        int n1, raiz;

        printf("Digite um numero: ");
        scanf("%d", & n1);

        if (n1 >= 0)
        {
            raiz = sqrt(n1);
            printf("A raiz quadrada deste numero e: %d", raiz);
        }

        else 
        {
            n1 = n1*n1;
            printf("Este numero ao quadrdo e: %d", n1);
        }

    return 0;

    }



