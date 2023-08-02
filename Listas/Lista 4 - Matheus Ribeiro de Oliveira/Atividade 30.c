//Atividade 30

/*Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na
cadeia B.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char A[100];
    char B[100];

    printf("Digite a cadeia A: ");
    fgets(A, 100, stdin);

    A[strcspn(A, "\n")] = '\0';

    printf("Digite a cadeia B: ");
    fgets(B, 100, stdin);

    B[strcspn(B, "\n")] = '\0';

    int count = 0;
    int lenA = strlen(A);
    int lenB = strlen(B);

    for (int i = 0; i <= lenB - lenA; i++) 
    {
        int match = 1;

        for (int j = 0; j < lenA; j++) 
        {
            if (B[i + j] != A[j]) 
            {
                match = 0;
                break;
            }
        }

        if (match) 
        {
            count++;
        }
    }

    printf("A cadeia A ocorre %d vezes na cadeia B.\n", count);

    return 0;
}
