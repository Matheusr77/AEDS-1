//Atividade 39

/*Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas  ̃
pelo usuario. Esse programa nao pode permitir a entrada de dados invalidos, ou seja,  ́
medidas menores ou iguais a 0.*/

#include <stdio.h>

int main () {

    int altura, base, area;

    printf("Digite a altura do triangulo: ");
    scanf("%d", & altura);
    printf("Digite a base do triangulo: ");
    scanf("%d", & base);

    if (altura <= 0 || base <= 0)
        {
            printf("Dados invalidos.");
        }

    else 
        {
            area = (base * altura) / 2;
            printf("A area do triangulo e: %d", area);
        }
    


return 0;

}