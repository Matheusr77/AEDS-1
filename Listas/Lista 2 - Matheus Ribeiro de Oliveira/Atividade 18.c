//Atividade 18

/*Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e  ́
quantas vezes o maior numero foi lido. A quantidade de números a serem lidos deve ser  ́
fornecida pelo usuario. ́*/

#include <stdio.h>

int main() {

    int quant, num, maior, xmaior = 0;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &quant);

    for (int i = 1; i <= quant; i++) 
    {
        printf("Digite o numero: ", i);
        scanf("%d", &num);

        if (i == 1 || num > maior) 
        {
            maior = num;
            xmaior = 1;
        } 

        else if (num == maior) 
        {
            xmaior++;
        }
        
    }

    printf("O maior numero digitado foi: %d\n", maior);
    printf("O maior numero foi lido %d vezes.", xmaior);

    return 0;
}
