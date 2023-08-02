//Atividade 37

/*Escreve um programa que verifique quais numeros entre 1000 e 9999 (inclusive) pos-  ́
suem a propriedade seguinte: a soma dos dois dıgitos de mais baixa ordem com os dois
d ́ıgitos de mais alta ordem elevada ao quadrado e igual ao proprio numero. Por exemplo,  ́
para o inteiro 3025, temos que:
30 + 25 = 55
552 = 3025*/

#include <stdio.h>

int main () {

    int m, c, d, u, soma = 0;

    for (int i = 1000; i <= 9999; i++)
    {
        m = i / 1000;
        c = (i / 100) % 10;
        d = (i / 10) % 10;
        u = i % 10;

        soma = (m * 10 + c) + (d * 10 + u);

        if (soma * soma == i)
        {
            printf("%d \n", i);
        }
        
    }
    

return 0;

}