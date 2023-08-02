//Atividade 10

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include <stdio.h>

int main () {

    int num = 0;

    for (int i = 0; i < 50; i++)
    {
        num = num + 2;
        printf("%d ", num);
        
    }
    

return 0;

}