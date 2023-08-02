//Atividade 15

/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto e, domingo se 1, segunda-feira se 2, e
assim por diante.*/

#include <stdio.h>

    int main () {

        int num;
        
        printf("Digite um numero de 1 a 7 que retornarei o dia correespondente ao numero.\nNumero: ");
        scanf("%d", & num);

        switch (num)
        {
        case 1:

            printf("Hoje e domingo.");

            break;

        case 2:
        
            printf("Hoje e segunda.");

        break;

        case 3:
        
            printf("Hoje e terca.");

        break;

        case 4:
        
            printf("Hoje e quarta.");

        break;

        case 5:
        
            printf("Hoje e quinta.");

        break;

        case 6:
        
            printf("Hoje e sexta.");

        break;
    
        case 7:
        
            printf("Hoje e sabado.");

        break;
        
        default:
            break;
        }

    return 0;

    }


