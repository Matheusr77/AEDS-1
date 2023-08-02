//Atividade 21

/*Escreva o menu de operações abaixo. Leia a opcão do usuario e execute a operação esco-  ̃
lhida. Escreva uma mensagem de erro se a opcão for invalida.  ́
Escolha a operação:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Operação*/

#include <stdio.h>

    int main () {

                float op1, op2, op3, op4, op, n1, n2;

        printf("Escolha uma das quatro operacoes:\n1. Soma de dois numeros \n2. Diferenca entre dois numeros \n3. Produto entre 2 numeros \n4. Divisao entre dois numeros \nOperacao: ");
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
            printf("A soma destes valores sao: %.1f", op1);
        }
                
        else if ((op == op2) && (n1 > n2))
        {
            op2 = n1 - n2;
            printf("A diferenca entre estes valores sao: %.1f", op2);
        }

        else if ((op == op2) && (n2 > n1))
        {
            op2 = n2 - n1;
            printf("A diferenca entre estes valores sao: %.1f", op2);
        }

        else if (op == op3)
        {
            op3 = n1 * n2;
            printf("O produto entre estes valores sao: %.1f", op3);
        }

        else if ((op == op4) && (n2 != 0))
        {
            op4 = n1 / n2;
            printf("A divisao destes valores sao: %.1f", op4);
        }

        else
        {
            printf("ERRO! Opcao invalida.");
        }
        


    return 0;

    }