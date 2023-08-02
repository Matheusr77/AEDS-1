//Atividade 9

/*Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
contrário imprima: Empréstimo concedido.*/

#include <stdio.h>

    int main () {

        float salario, emprestimo, limite; 

        printf("Digite o seu salario: ");
        scanf("%f", & salario);
        printf("Digite o valor da prestacao emprestimo que voce deseja: ");
        scanf("%f", & emprestimo);

        limite = salario * 0.2;

        if (emprestimo > limite)
        {
            printf("Emprestimo concedido!");
        }

        else
        {
            printf("Emprestimo nao concedido!");
        }
        
    return 0;

    }


