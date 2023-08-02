//Atividade 2

/*Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido.*/

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
            printf("Este numero e invalido.");
        }


    return 0;

    }

