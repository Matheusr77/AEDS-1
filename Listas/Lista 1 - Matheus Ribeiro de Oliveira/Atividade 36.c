//Atividade 36

/*Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser  ́
paga ao vendedor.*/


#include <stdio.h>

    int main () {

        float valor, comissao;

        printf("Digite o valor da venda: ");
        scanf("%f", & valor);

        if (valor >= 100000)
        {
            comissao = 700 + ((valor * 1.16) - valor);
            printf("A sua comissao e: %.2f", comissao);
        }
        
        else if (valor < 100000 && valor >= 80000)
        {
            comissao = 650 + ((valor * 1.14) - valor);
            printf("A sua comissao e: %.2f", comissao);
        }

        else if (valor < 80000 && valor >= 60000)
        {
            comissao = 600 + ((valor * 1.14) - valor);
            printf("A sua comissao e: %.2f", comissao);
        }

        else if (valor < 60000 && valor >= 40000)
        {
            comissao = 550 + ((valor * 1.14) - valor);
            printf("A sua comissao e: %.2f", comissao);
        }

        else if (valor < 40000 && valor >= 20000)
        {
            comissao = 500 + ((valor * 1.14) - valor);
            printf("A sua comissao e: %.2f", comissao);
        }

        else if (valor < 20000)
        {
            comissao = 400 + ((valor * 1.14) - valor);
            printf("A sua comissao e: %.2f", comissao);
        }


    return 0;

    }