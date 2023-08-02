//Atividade 12

/*Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.*/

#include <stdio.h>
#include <math.h>

    int main () {

        int n1, logaritmo;

        printf("Digite um numero inteiro: ");
        scanf("%d", & n1);

        if (n1 > 0)
        {
            logaritmo = log10(n1);
            printf("O logaritmo deste numero e: %d", logaritmo);
        }

        else
        {
            printf("Numero invalido!");
        }
        
    return 0;

    }


