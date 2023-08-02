//Atividade 16

/*Faça um programa que leia um vetor de 5 posições para números reais e, depois, um  ́
codigo inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem  ́
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2  ́
escreva uma mensagem informando que o codigo é inválido.  ́*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a[5], codigo;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n=======================================================\n");
    printf("\nO que deseja fazer?\n");
    printf("\n[0] Finalizar o programa. \n[1] Mostrar o vetor na ordem direta. \n[2] Mostrar o vetor na ordem inversa.\n\n");
    scanf("%d", &codigo);
    
    if (codigo == 1)
    {
        printf("\n=======================================================\n");
        printf("\nVetor na ordem direta\n");

        for (int i = 0; i < 5; i++)
            {
                printf("%d ", a[i]);
            }
    }

    else if (codigo == 2)
    {
        printf("\n=======================================================\n");
        printf("\nVetor na ordem inversa\n");

        for (int i = 4; i > -1; i--)
            {
                printf("%d ", a[i]);
            }
    }
    
    else if (codigo == 0)
    {
        return 0;
    }
    
    else 
    {
        printf("\n=======================================================\n");
        printf("\nCodigo invalido.\n");
    }


    return 0;

}