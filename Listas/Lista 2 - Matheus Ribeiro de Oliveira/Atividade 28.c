//Atividade 28

/*Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a formula a seguir  ́

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/

#include <stdio.h>

int main () {

    int num;
    double e = 0.0, fat = 1.0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", & num);

    for (int i = 1; i <= num; i++)
    {
        fat = fat * i;
        e = e + 1 / fat;
    }
    
    printf("O valor de E e: %.3f", e);


return 0;

}