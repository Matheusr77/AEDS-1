//Atividade 1

/*Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.*/

#include <stdio.h>

int main () {

    int num, i = 1, cont = 0;

    while (cont < 5)
    {
        num = i * 3;
        printf("%d ", num);
        i ++;
        cont ++;
    }
    

return 0;

}


