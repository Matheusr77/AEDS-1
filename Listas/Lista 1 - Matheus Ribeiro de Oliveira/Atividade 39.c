//Atividade 39

/*Faça um programa que leia:  
• o valor do salario atual do funcionário; 
• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na  ́
empresa).*/


#include <stdio.h>

    int main () {

        float salario, reajuste;
        int tempo;

        printf("Digite o seu salario atual: ");
        scanf("%f", & salario);
        printf("Digite o tempo de servico na empresa: ");
        scanf("%d", & tempo);
    
        if (salario < 500.00 && tempo < 1)
        {
            reajuste = (salario * 1.25);
            printf("O salario final e: %.2f", reajuste);
        }

        else if (salario < 1000.00 && tempo > 1 && tempo <= 3)
        {
            reajuste = (100 + (salario * 1.20));
            printf("O salario final e: %.2f", reajuste);
        }

        else if (salario < 1500.00 && tempo > 4 && tempo <= 6)
        {
            reajuste = (200 + (salario * 1.15));
            printf("O salario final e: %.2f", reajuste);
        }

        else if (salario < 2000.00 && tempo > 7 && tempo <= 10)
        {
            reajuste = (300 + (salario * 1.10));
            printf("O salario final e: %.2f", reajuste);
        }   

        else if (salario > 2000.00 && tempo > 10)
        {
            reajuste = (500 + salario);
            printf("O salario final e: %.2f", reajuste);
        }

        else
        {
            printf("O funcionario nao tem direito a nenhum reajuste.");
        }
        

    return 0;

    }