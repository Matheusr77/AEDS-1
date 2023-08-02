//Atividade 16

/*Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mes
correspondente a este numero. Isto e, janeiro se 1, fevereiro se 2, e assim por diante.*/

#include <stdio.h>

    int main () {

        int num;
        
        printf("Digite um numero de 1 a 12 que retornarei o mes correespondente ao numero.\nNumero: ");
        scanf("%d", & num);

        switch (num)
        {
        case 1:

            printf("Janeiro");

            break;

        case 2:
        
            printf("Fevereiro");

        break;

        case 3:
        
            printf("Março");

        break;

        case 4:
        
            printf("Abril");

        break;

        case 5:
        
            printf("Maio");

        break;

        case 6:
        
            printf("Junho");

        break;
    
        case 7:
        
            printf("Julho");

        break;

        case 8:

            printf("Agosto");

            break;

        case 9:
        
            printf("Setembro");

        break;

        case 10:
        
            printf("Outubro");

        break;

        case 11:
        
            printf("Novembro");

        break;

        case 12:

        printf("Dezembro");

        break;
        
        default:
            break;
        }

    return 0;

    }