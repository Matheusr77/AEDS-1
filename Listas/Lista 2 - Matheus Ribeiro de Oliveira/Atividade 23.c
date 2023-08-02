//Atividade 23

/*Faça um algoritmo que leia um numero positivo e imprima seus divisores.*/

#include <stdio.h>

int main () {

    int num, div = 1, cont = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", & num);

    while (cont < num)
    {
        if (num % div == 0 )
        {
            printf("%d ", div);
        }
        div++;
        cont++;
    }
    

return 0;

}