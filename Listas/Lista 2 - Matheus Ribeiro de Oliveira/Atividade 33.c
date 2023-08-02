//Atividade 33

/*Dados n e dois numeros inteiros positivos, i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que sao múltiplos de  ́ i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a sa ́ıda devera ser: 0,2,3,4,6,8.  ́*/

#include <stdio.h>

int main () {

    int n, i, j, cont = 0;

    printf("Digite um numero positivo para n: ");
    scanf("%d", & n);
    printf("Digite um numero positivo para i: ");
    scanf("%d", & i);
    printf("Digite um numero positivo para j: ");
    scanf("%d", & j);

    for (int x = 0; x <= n ; x++)
    {
        if (x % i == 0 || x % j == 0)
        { 
            printf("%d, ", x);
            cont++;
        }
        
    }
    
    printf("\nOs primeiros %d naturais múltiplos de %d ou %d são: ", n, i, j);
   

return 0;

}