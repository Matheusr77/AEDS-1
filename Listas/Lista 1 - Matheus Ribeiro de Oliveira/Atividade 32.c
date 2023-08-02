//Atividade 32

/*Escrever um programa que leia o codigo do produto escolhido do cardápio de uma lan-  ́
chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lan-  ́
chonete segue o padrao abaixo:*/

#include <stdio.h>

    int main () {

        int cod, quant;

        printf("Digite o codigo do lanche: ");
        scanf("%d", & cod);
        printf("Digite a quantidade de lanches que deseja: ");
        scanf("%d", & quant);

        //Cachorro Quente
        if (cod == 100)
        {
            quant = quant * 1.20;
            printf("O preco final e: %d", quant);
        }
        
        //Bauru Simples
        else if (cod == 101)
        {
            quant = quant * 1.30;
            printf("O preco final e: %d", quant);
        }

        //Bauru com Ovo
        else if (cod == 102)
        {
            quant = quant * 1.50;
            printf("O preco final e: %d", quant);
        }

        //Hamburguer
        else if (cod == 103)
        {
            quant = quant * 1.20;
            printf("O preco final e: %d", quant);
        }

        //Cheeseburguer
        else if (cod == 104)
        {
            quant = quant * 1.70;
            printf("O preco final e: %d", quant);
        }

        //Suco
        else if (cod == 105)
        {
            quant = quant * 2.20;
            printf("O preco final e: %d", quant);
        }

        //Refrigerante
        else if (cod == 106)
        {
            quant = quant * 1.00;
            printf("O preço final e: %d", quant);
        }


    return 0;

    }