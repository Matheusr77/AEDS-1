//Atividade 26

/*Leia a distancia em  Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:

CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Economico! 
maior que 12 Super economico! */

#include <stdio.h>

    int main () {

        float km, litros, consumo;

        printf("Digite a distancia em KM percorrida: ");
        scanf("%f", & km);
        printf("Digite a quantidade de gasolina em litros consumidos pelo carro: ");
        scanf("%f", & litros);        

        consumo = km/litros;

        if (consumo < 8)
        {
            printf("Venda o carro!");
        }
        
        else if (consumo >= 8 && consumo <= 14)
        {
            printf("Economico!");
        }

        else if (consumo > 12)
        {
            printf("Super economico!");
        }

    return 0;

    }