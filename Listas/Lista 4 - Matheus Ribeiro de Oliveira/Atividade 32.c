//Atividade 32

/*Enunciado muito grande*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    fgets(data, sizeof(data), stdin);

    data[strcspn(data, "\n")] = '\0';

    if (strlen(data) != 10 || data[2] != '/' || data[5] != '/') 
    {
        printf("Formato de data inválido.\n");
        return 1; 
    }

    for (int i = 0; i < 10; i++) 
    {
        if (i != 2 && i != 5 && !isdigit(data[i])) 
        {
            printf("Formato de data inválido.\n");
            return 1;
        }
    }

    char diaStr[3];
    strncpy(diaStr, data, 2);
    diaStr[2] = '\0';
    dia = atoi(diaStr);

    char mesStr[3];
    strncpy(mesStr, data + 3, 2);
    mesStr[2] = '\0';
    mes = atoi(mesStr);

    char anoStr[5];
    strncpy(anoStr, data + 6, 4);
    anoStr[4] = '\0';
    ano = atoi(anoStr);

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
