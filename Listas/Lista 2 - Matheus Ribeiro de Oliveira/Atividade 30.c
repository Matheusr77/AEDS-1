//Atividade 30

/*Faça programas para calcular as seguintes sequencias: ˆ
1 + 2 + 3 + 4 + 5 + ... + n
1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
1 + 3 + 5 + 7 + ... + (2n − 1)*/

#include <stdio.h>

int main () {

    int num = 0, soma1 = 0, soma2 = 0, soma3 = 0, i = 0, sinal = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (i <= num)
    {
        soma1 = soma1 + i;
        i++;
    }

    while (i <= 2 * num - 1) {
        soma2 += sinal * i;
        sinal *= -1;
        i += 2;
    }

    while (i <= 2 * num - 1) {
        soma3 += i;
        i += 2;
    }

    printf("Expressao 1: %d \nExpressao 2: %d \nExpressao 3: %d", soma1, soma2, soma3);

return 0;

}