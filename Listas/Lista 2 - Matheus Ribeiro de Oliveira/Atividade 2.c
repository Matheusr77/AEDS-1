//Atividade 2

/*Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do while.*/

#include <stdio.h>

int main () {

    //Utlizando o for

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", i);
    }

    //Utilizando o while

    int num = 0;

    while (num < 100)
    {
        num ++;
        printf("%d ", num);
    }
    
    //Utilizando o do while

    int cont = 0;

    do
    {
        cont ++;
        printf("%d ", cont);
    } while (cont < 100);


return 0;

}