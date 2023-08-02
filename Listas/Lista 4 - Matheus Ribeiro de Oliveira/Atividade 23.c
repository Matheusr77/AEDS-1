//Atividade 23

/*Escreva um programa que recebe uma string S e inteiros nao-negativos I e J e imprima  ̃
o segmento S[I..J].*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char S[100];
    int I, J;

    printf("Digite uma string: ");
    fgets(S, 100, stdin);
    
    printf("Digite dois inteiros não-negativos (I e J): ");
    scanf("%d %d", &I, &J);

    int len = strlen(S);

    if (I >= 0 && J >= 0 && I < len && J < len && I <= J) 
    {
        printf("Segmento S[%d..%d]: ", I, J);

        for (int i = I; i <= J; i++) 
        {
            printf("%c", S[i]);
        }

        printf("\n");
    } 
    
    else 
    {
        printf("Índices inválidos.\n");
    }

    return 0;
}
