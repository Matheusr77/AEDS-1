//Atividade 20

/*Ler uma sequencia de números inteiros e determinar se eles são pares ou não. Deverá
ser informado o número de dados lidos e número de valores pares. O processo termina 
quando for digitado o número 1000.  ́*/

#include <stdio.h>

int main () {

    int num, par, i = 0;

    while (num != 1000)
    {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", & num);

        i++;

        if (num % 2 == 0)
        {
            printf("\nEste numero e par.\n");
            par++;
        }
        
        else
        {
            printf("\nEste numero nao e par.\n");
        }

        printf("\nDados lidos: %d \nValores pares lidos: %d\n", i, par);
        printf("===========================================");

    }
    

return 0;

}