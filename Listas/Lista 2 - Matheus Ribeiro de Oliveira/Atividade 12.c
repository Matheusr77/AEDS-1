//Atividade 12

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>

int main () {

    int num, cont;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    cont = num;

    while (cont >= 0)
    {
        printf("%d ", cont);
        cont--; 
    
    }
    
return 0;

}