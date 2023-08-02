//Atividade 22

/*Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequencia arbitraria de notas (válidas no intervalo de 10 a 20) e que mostre na tela,  ́
como resultado, a correspondente media aritmética. O número de notas com que o aluno  ́
pretenda efetuar o calculo não será fornecido ao programa, o qual terminará quando for  ́
introduzido um valor que nao seja válido como nota de aprovação.  ̃*/

#include <stdio.h>

int main () {

    int num, num_notas, media = 0, cont = 0, i = 0;

    printf("Quantos notas voce deseja digitar? ");
    scanf("%d", & num_notas);

    while (cont < num_notas)
    {
        printf("Digite uma nota: ");
        scanf("%d", & num);
        cont++;

        if (num < 10 && num > 20)
        {
            break;
        }

        else
        {
            media = media + num;
            i++;
        }
        
    }

    media = media / i;
    printf("A media das notas e: %d", media);

return 0;

}