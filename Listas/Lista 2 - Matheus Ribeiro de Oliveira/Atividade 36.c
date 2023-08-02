//Atividade 36

/*Enunciado muito grande*/

#include <stdio.h>
#include <math.h>

int main () {

    int soma1 = 0, soma2 = 0, dif;

    for (int i = 0; i <= 100; i++)
    {
        soma1 = soma1 + pow(i, 2);
        soma2 = soma2 + i;
    }
    
    soma2 = pow(soma2, 2);

    printf("A soma dos quadrados dos 100 primeiros numeros naturais e: %d\n", soma1);
    printf("O quadrado da soma dos 100 primeiros numeros naturais e: %d\n", soma2);

    dif = soma2 - soma1;

    printf("A diferenca entre estes resultados e: %d", dif);


return 0;

}