//Atividade 21

/*Faça um programa que receba dois numeros. Calcule e mostre:  ́
• a soma dos numeros pares desse intervalo de números, incluindo os números digi-  ́
tados;
• a multiplicação dos números ́ımpares desse intervalo, incluindo os digitados*/

#include <stdio.h>

int main () {

    int num1, num2, pares = 0, impares = 1, x = 0;

    printf("Digite um numero: ");
    scanf("%d", & num1);
    printf("Digite outro numero: ");
    scanf("%d", & num2);

    x = num1;

    if (num2 < num1) {
      
        num1 = num2;
        num2 = x;
    }

    for (int i = num1; i <= num2; i++) 
    {
        if (i % 2 == 0) 
        { 
            pares = pares + i;
        } 
        
        else 
        {
            impares = impares * i;
        }
    }

    printf("Soma dos numeros pares: %d\n", pares);
    printf("Multiplicacao dos numeros impares: %d\n", pares);

    return 0;
}