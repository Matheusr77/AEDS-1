//Atividade 4

/*Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).*/

#include <stdio.h>

int main () {

    int cont = 0;

    while (cont < 100000)
    {
        cont = cont + 1000;
        printf("%d ", cont);
    }
    

return 0;

}