//Atividade 5

/*Digite um nome, calcule e retorne quantas letras tem esse nome.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nome[11];
int cont = -1;

printf("Digite o seu primeiro nome: ");
fgets(nome, 11, stdin);

for (int i = 0; i < 11; i++)
{
    if (nome[i] != '\0')
    {
        cont++;
    }
    
}

printf("\nO seu nome tem %d letras", cont);

    return 0;
}