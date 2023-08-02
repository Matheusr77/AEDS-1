//Atividade 23

/*Determine se um determinado ano lido e bissexto. Sendo que um ano é bissexto se  ́
for divisível por 400 ou se for divisível por 4 e nao for divisível por 100. Por exemplo:
1988, 1992, 1996*/

#include <stdio.h>

    int main () {

        int ano;

        printf("Digite o ano para saber se ele e bissexto: ");
        scanf("%d", & ano);

        if ((ano % 400 == 0) || (ano % 4 == 0 && ! ano % 100 == 0))
        {
            printf("Este ano e bissexto");
        }

        else 
        {
            printf("Este ano nao e bissexto");
        }


    return 0;

    }