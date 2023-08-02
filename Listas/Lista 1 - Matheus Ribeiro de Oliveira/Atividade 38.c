//Atividade 38

/*Enunciado muito grande*/


#include <stdio.h>

    int main () {

        int dia, mes, ano, anoatual;

        printf("Digite o dia: ");
        scanf("%d", & dia);
        printf("Digite o mes (1 a 12): ");
        scanf("%d", & mes);
        printf("Digite o ano: ");
        scanf("%d", & ano);

        if ((anoatual <= 2008) && (mes >= 1 && mes <= 12))

        if ((mes == 1) && (mes == 3) && (mes == 5) && (mes == 7) && (mes == 8) && (mes == 10) && (mes == 12))
            if (dia >= 1 && dia <= 31)
        {
            printf("Data valida.");
        }


        else if ((mes == 4) && (mes == 6) && (mes == 9) && (mes == 11))
            if (dia >= 1 && dia <= 30)
        {
            printf("Data valida.");
        }   


        else if (mes == 2)
            if (dia >= 1 && dia <= 28)
        {
            printf("Data valida.");
        }


        else if (mes == 2)

            if ((ano % 4 == 0) && (dia >= 1 && dia <= 29))
            {
                printf("Data valida");
            }

        
        else
        {
            printf("Data invalida.");
        }
        
        

    return 0;

    }