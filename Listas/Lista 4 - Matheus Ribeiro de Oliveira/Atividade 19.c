//Atividade 19

/*Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa
deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve
escrever o nome e a idade das pessoas mais jovens e mais velhas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[20];
    int idade, idadeMaisJovem = 999, idadeMaisVelha = -1;
    char nomeMaisJovem[20], nomeMaisVelho[20];

    for (int i = 0; i < 10; i++) 
    {
        printf("Digite o primeiro nome: ");
        scanf("%s", nome);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) 
        {
            break;
        }

        if (idade < idadeMaisJovem) 
        {
            idadeMaisJovem = idade;
            strcpy(nomeMaisJovem, nome);
        }

        if (idade > idadeMaisVelha) 
        {
            idadeMaisVelha = idade;
            strcpy(nomeMaisVelho, nome);
        }
    }

    printf("\nPessoa mais jovem: %s, %d anos\n", nomeMaisJovem, idadeMaisJovem);
    printf("Pessoa mais velha: %s, %d anos\n", nomeMaisVelho, idadeMaisVelha);

    return 0;
}
