//Atividade 6

/*Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome
da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nome[10], sexo[10]; 
int idade;

printf("Digite o seu primeiro nome: ");
fgets(nome, 10, stdin);
printf("Digite o seu sexo: ");
fgets(sexo, 10, stdin);
printf("Digite a sua idade: ");
scanf("%d", &idade);

if (strcmp(sexo, "feminino\n") == 0 && idade < 25) 
    {
        printf("%sACEITA", nome);
    } 
    
    else 
    {
        printf("NAO ACEITA\n");
    }



    return 0;
}