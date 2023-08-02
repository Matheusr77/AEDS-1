//Atividade 19

/*Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na saída
cada um dos algarismos que compõem o número.*/

#include <stdio.h>

int main () {

    int num, centenas, dezenas, unidades;

    printf("Digite um numero de 100 a  999: ");
    scanf("%d", & num);

    centenas = num / 100;
    dezenas = (num % 100) / 10;
    unidades = num % 10;

    printf("Os algarismos que compõem o numero e: %d, %d e %d", centenas, dezenas, unidades);


return 0;

}