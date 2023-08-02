//Atividade 19

/*Faça um programa para verificar se um determinado numero inteiro e divisível por 3 ou
5, mas nao simultaneamente pelos dois.  ̃*/

#include <stdio.h>

    int main () {

        int num;

        printf("Digite um numero inteiro: ");
        scanf("%d", & num);

        if (num % 3 == 0 && num % 5 != 0)
        {
            printf("Este numero e divisivel por 3 mas nao por 5");
        }

        else if (num % 5 == 0 && num % 3 != 0)
        {
             printf("Este numero e divisivel por 5 mas nao por 3");
        }

        else 
        {
            printf("Erro!");
        }


    return 0;

    }