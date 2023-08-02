//Atividade 29

/*Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo
N. Concatene nao mais que N caracteres da string  ̃ str2 a string ` str1 e termine str1 com
‘\0’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str1[100];
    char str2[100];
    int N;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    str2[strcspn(str2, "\n")] = '\0';

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int tam1 = strlen(str1);
    int tam2 = strlen(str2);

    int i, j;

    for (i = tam1, j = 0; i < tam1 + N && j < tam2; i++, j++) 
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    printf("Resultado da concatenação: %s\n", str1);

    return 0;
}
