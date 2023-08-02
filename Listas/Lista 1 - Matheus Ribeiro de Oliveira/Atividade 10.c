//Atividade 10

/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
. Homens: (72,7 * h) - 58
. Mulheres: (62, 1 * h) – 44, 7*/

#include <stdio.h>


    int main () {

        float altura, peso;
        char sexo;

        printf("Digite sua altura: ");
        scanf("%f", &altura); 
        printf("Digite seu sexo(M OU F): ");
        scanf(" %c", &sexo);       

        if (sexo == 'M')
        {
            peso = (72.7 * altura) - 58;
            printf("Seu peso ideal e: %.2f\n", peso);
        }
    
        else if (sexo == 'F')
        {
            peso = (62.1 * altura) - 44.7;
            printf("Seu peso ideal e: %.2f\n", peso);
        }

        else 
        {
        printf("Sexo invalido!\n");
        }


    return 0; 

    }





