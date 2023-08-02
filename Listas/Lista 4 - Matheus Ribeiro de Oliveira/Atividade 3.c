//Atividade 3

/*Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(maiúscula ou minúscula).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nome[11];

printf("Digite o seu primeiro nome: ");
fgets(nome, 11, stdin);


if (nome[0] == 'a' || 'A')
{
    printf("\nSeu nome e: %s", nome);
}

else
{
    printf("Seu nome nao comeca com a letra a");
}
    
    return 0;
}