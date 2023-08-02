//Atividade 60

/*Faça um programa que leia varios números, calcule e mostre:  ́
(a) A soma dos numeros digitados  ́
(b) A quantidade de números digitados  ́
(c) A media dos números digitados  ́
(d) O maior numero digitado  ́
(e) O menor numero digitado  ́
(f) A media dos números pares  ́

Finalize a entrada de dados caso o usuário informe o valor 0.*/

#include <stdio.h>

int main () {

    int num, cont = 0, soma = 0, maior, menor, soma_par = 0, x = 0;
    float  media1 = 0.0, media2 = 0.0;

    printf("Quantos numeros voce deseja digitar: ");
    scanf("%d", &cont);
    
    for (int i = 0; i < cont; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        
        soma = soma + num;

        if (i == 0)
        {
            maior = num;
            menor = num;
        }

        if (num > maior)
        {
            maior = num;
        }

        if (num < menor)
        {
            menor = num;
        }
        
        if (num % 2 == 0)
        {
            soma_par = soma_par + num;
            x++;
        }
        
        
    }
    
        media1 = soma / cont;
        media2 = soma_par / x;

        printf("\nSoma dos numeros: %d", soma);
        printf("\nQuantidade de numeros digitados: %d", cont);
        printf("\nMedia dos numeros: %.2f", media1);
        printf("\nMaior numero digitado: %d", maior);
        printf("\nMenor numero digitado: %d", menor);
        printf("\nMedia dos numeros pares: %.2f", media2);


return 0;

}