//Atividade 34

/*Enunciado muito grande*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int v[10];
    int i, j, num;

    for (i = 0; i < 10; i++) 
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        
        for (j = 0; j < i; j++) 
        {
            if (num == v[j]) 
            {
                printf("Numero ja digitado. Digite outro numero.\n");
                i--;
                break;
            }
        }

        v[i] = num;
    }

    
    printf("\nNumeros digitados:\n");

    for (i = 0; i < 10; i++) 
    {
        printf("%d ", v[i]);
    }
    
    printf("\n");

    return 0;
}
