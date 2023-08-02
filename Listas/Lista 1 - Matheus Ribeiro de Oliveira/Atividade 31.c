//Atividade 31

/*Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificação dessa pessoa.*/


#include <stdio.h>

    int main () {

        float altura, peso;

        printf("Digite sua altura em metros: ");
        scanf("%f", & altura);
        printf("Digite o seu peso: ");
        scanf("%f", & peso);

        //Menor que 1,20

        if (altura < 1.20 && peso < 60)
        {
            printf("Sua categoria e: A");
        }
        
        else if (altura < 1.20 && peso >= 60 && peso <= 90)
        {
            printf("Sua categoria e: B");
        }

        else if (altura < 1.20 && peso > 90)
        {
            printf("Sua categoria e: G");
        }   

        //De 1,20 a 1,70     

        else if (altura >= 1.20 && altura <= 1.70 && peso < 60)
        {
            printf("Sua categoria e: B");
        }
        
        else if (altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90)
        {
            printf("Sua categoria e: E");
        }

        else if (altura >= 1.20 && altura <= 1.70 < 1.20 && peso > 90)
        {
            printf("Sua categoria e: H");
        }   

        //Maior que 1,70     

        else if (altura > 1.70 && peso < 60)
        {
            printf("Sua categoria e: C");
        }
        
        else if (altura > 1.70 && peso >= 60 && peso <= 90)
        {
            printf("Sua categoria e: F");
        }

        else if (altura > 1.70 && peso > 90)
        {
            printf("Sua categoria e: I");
        }   

    return 0;

    }