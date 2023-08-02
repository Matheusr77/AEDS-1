//Atividade 24

/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Faça um programa em que o usuario entre com o valor e o estado destino do  ́
produto e o programa retorne o preço final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado não for valido, mostrar uma mensagem  ́
de erro.*/

#include <stdio.h>

    int main () {

        float valor, imposto, estado;

        printf("Digite o valor do produto: ");
        scanf("%f", & valor);
        printf("Digite o estado que sera vendido ([1] MG,[2] SP,[3] RJ ou [4] MS): ");
        scanf("%f", & estado);       

        if (estado == 1)
        {
            imposto = (valor * 0.07) + valor;
            printf("O valor final do produto e: %.2f", imposto);
        }

        else if (estado == 2)
        {
            imposto = (valor * 0.12) + valor;
            printf("O valor final do produto e: %.2f", imposto);
        }       

        else if (estado == 3)
        {
            imposto = (valor * 0.15) + valor;
            printf("O valor final do produto e: %.2f", imposto);
        }    

        else if (estado == 4)
        {
            imposto = (valor * 0.08) + valor;
            printf("O valor final do produto e: %.2f", imposto);
        }    

        else
        
        {
            printf("Estado invalido!");
        }
        

    return 0;

    }