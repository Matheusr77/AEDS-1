//Atividade 53

/*Escreva um programa que leia um numero inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Floyd. Para n = 6, temos:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>

int main () {

    int n, cont = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int x = 1; x <= i; x++)
        {
            printf("%d ", cont);
            cont++;
        }

        printf("\n");
        
    }    


return 0;

}