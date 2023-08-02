//Atividade 18

/*Faça um programa que mostre ao usuario um menu com 4 opções de operações 
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu 
programa entao pede dois valores numericos e realiza a operação, mostrando o resultado e  ̃
saindo.*/

#include <stdio.h>

    int main () {

        float op1, op2, op3, op4, op, n1, n2;

        printf("Escolha uma das quatro operacoes:\n1. Adicao \n2. Subtracao \n3. Multiplicacao \n4. Divisao \nOperacao: ");
        scanf("%f", & op);
        printf("Agora escolha um valor: ");
        scanf("%f", & n1);      
        printf("Agora escolha outro valor: ");
        scanf("%f", & n2);

        op1 = 1;
        op2 = 2;
        op3 = 3;
        op4 = 4;

        if (op == op1)
        {
            op1 = n1 + n2;
            printf("A soma destes valores sao: %.2f", op1);
        }
                
        else if (op == op2)
        {
            op2 = n1 - n2;
            printf("A subtracao destes valores sao: %.2f", op2);
        }

        else if (op == op3)
        {
            op3 = n1 * n2;
            printf("A multiplicacao destes valores sao: %.2f", op3);
        }

        else if (op == op4)
        {
            op4 = n1 / n2;
            printf("A divisao destes valores sao: %.2f", op4);
        }

    return 0;

    }