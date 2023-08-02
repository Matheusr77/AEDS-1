//Atividade 47

/*Faça um programa que apresente um menu de opções para o calculo das seguintes  ́
operções entre dois numeros:  ́
• adição (opção 1)  ̃
• subtração(opção 2)  ̃
• multiplicação (opção 3)  ̃
• divisão (opção 4).  ̃
• saída (opção 5)
O programa deve possibilitar ao usuario a escolha da operação desejada, a exibição do  ̃
resultado e a volta ao menu de opções. O programa só termina quando for escolhida a  ́
opção de saída (opção 5).*/

#include <stdio.h>

int main () {

    int op = 0, op1 = 0, num1, num2, res = 0;

    while (1)
    {
        printf("\nEscolha uma opcao: \n[1] Adicao \n[2] Subtracao \n[3] Multiplicacao \n[4] Divisao \n[5] Saida \n\n");
        scanf("%d", &op);


        if (op == 1)
        {
            printf("\nDigite um valor: ");
            scanf("%d", &num1);
            printf("Digite outro valor: ");
            scanf("%d", &num2);

            printf("\n[1] Ver resultado \n[2] Voltar ao menu \n\n");
            scanf("%d", &op1);

            if (op1 == 1)
            {
                res = num1 + num2;
                printf("Resultado: %d", res);
            }

            else if (op1 == 2)
            {
                return 0;
            }
            
        }

        else if (op == 2)
        {
            printf("\nDigite um valor: ");
            scanf("%d", &num1);
            printf("Digite outro valor: ");
            scanf("%d", &num2);

            printf("\n[1] Ver resultado \n[2] Voltar ao menu \n\n");
            scanf("%d", &op1);

            if (op1 == 1)
            {
                res = num1 - num2;
                printf("Resultado: %d", res);
            }

            else if (op1 == 2)
            {
                return 0;
            }
            
        }

        else if (op == 3)

        {
            printf("\nDigite um valor: ");
            scanf("%d", &num1);
            printf("Digite outro valor: ");
            scanf("%d", &num2);

            printf("\n[1] Ver resultado \n[2] Voltar ao menu \n\n");
            scanf("%d", &op1);

            if (op1 == 1)
            {
                res = num1 * num2;
                printf("Resultado: %d", res);
            }

            else if (op1 == 2)
            {
                return 0;
            }
            
        }

        else if (op == 4)
        {
            printf("\nDigite um valor: ");
            scanf("%d", &num1);
            printf("Digite outro valor: ");
            scanf("%d", &num2);

            printf("\n[1] Ver resultado \n[2] Voltar ao menu \n\n");
            scanf("%d", &op1);

            if (op1 == 1)
            {
                res = num1 / num2;
                printf("Resultado: %d", res);
            }

            else if (op1 == 2)
            {
                return 0;
            }
            
        }

        else if (op == 5)
        {
            break;
        }
        
    }

return 0;

}