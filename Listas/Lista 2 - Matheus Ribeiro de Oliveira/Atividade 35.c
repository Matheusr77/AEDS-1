//Atividade 35

/*Faça um programa que some os numeros impares contidos em um intervalo definido  ́
pelo usuario. O usuário define o valor inicial do intervalo e o valor final deste intervalo  ́
e o programa deve somar todos os numeros ́ımpares contidos neste intervalo. Caso o
usuario digite um intervalo inválido (comecando por um valor maior que o valor final) deve  ́
ser escrito uma mensagem de erro na tela, “Intervalo de valores invalido” e o programa  ́
termina.*/

#include <stdio.h>

int main () {

    int vi, vf, impar = 0;

    printf("Digite o valor inicial: ");
    scanf("%d", & vi);
    printf("Digite o valor final: ");
    scanf("%d", & vf); 

    if (vi >= vf)
    {
        printf("Intervalo de valores invalido.");
        return 0;
    }

    for (int i = vi; i <= vf; i++)
    {

        if (i % 2 != 0)
        {
            impar = impar + i;
        }
        
    }
      
    printf("A soma dos valores impares deste intervalo e: %d", impar);


return 0;

}