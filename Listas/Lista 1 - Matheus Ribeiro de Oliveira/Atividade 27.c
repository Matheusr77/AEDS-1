//Atividade 27

/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:

Categoria Idade
Infantil A 5 a 7
Infantil B 8 a 10
Juvenil A 11 a 13
Juvenil B 14 a 17
Senior maiores de 18 anos*/

#include <stdio.h>

    int main () {

        //Variáveis
        int anos;

        printf("Vamos descobrir a categoria do atleta.\n");
        printf("Para isso digite a idade do atleta: ");
        scanf("%d", & anos);

        if ((anos >= 5) && (anos <=7))
        {
            printf("\nEste e um atleta de categoria Infantil A");
        }

        else if ((anos >= 8) && (anos <= 10))
        {
            printf("\nEste e um atleta de categoria Infantil B");
        }

        else if ((anos >= 11) && (anos <= 13))
        {
            printf("\nEste e um atleta de categoria Juvenil A");
        }
        
        else if ((anos >= 14) && (anos <= 17))
        {
            printf("\nEste e um atleta de categoria Juvenil B");
        }

        else if (anos > 18)
        {
            printf("\nEste e um atleta de categoria Senior");
        }


    return 0;

    }