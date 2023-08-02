//Atividade 40

/*Elabore um programa que faça leitura de varios números inteiros, até que se digite um  ́
numero negativo. O programa tem que retornar o maior e o menor número lido.  ́*/

#include <stdio.h>

int main () {

    int num, maior = 0, menor = 0;

    while (1)
    {
        printf("Digite um numero: ");
        scanf("%d", & num);

        if (num < 0)
        {
            break;
        }

        else if (num > maior)
        {
            maior = num;
        }

        else if (num < menor)
        {
            menor = num;
        }
        
    }

    printf("Maior numero: %d \nMenor numero: %d", maior, menor);
    
    
return 0;

}