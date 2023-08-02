//Atividade 44

/*Leia um numero positivo do usuario, entao, calcule e imprima a sequencia Fibonacci ate ́
o primeiro numero superior ao numero lido. Exemplo: se o usuario informou o numero  ́
30, a sequencia a ser impressa sera 0 1 1 2 3 5 8 13 21 34.*/

#include <stdio.h>

int main () {

    int num, fib1 = 0, fib2 = 1, fib_atual = 1;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    while (fib_atual <= num) {
        printf("%d ", fib_atual);
        fib_atual = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_atual;
    }

    printf("\n");

return 0;

}