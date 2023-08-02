//Atividade 54

/*Faça um programa que receba um numero inteiro maior do que 1, e verifique se o número  ́
fornecido e primo ou não.*/

#include <stdio.h>

int main () {

    int num, x = 2, cont = 0;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", & num);

        while (x <= num / 2 )
        {
            if (num % x == 0)
            {
                cont = 1;
                break;
            }
            
        x++;
        }
        
        if (cont == 0 && num > 1)
        {
            printf("%d e um numero primo\n", num);
        }
    
        else 
        {
            printf("%d nao e um numero primo", num);
        }

return 0;

}