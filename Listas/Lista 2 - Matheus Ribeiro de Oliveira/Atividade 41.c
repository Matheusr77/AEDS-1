//Atividade 41

/*Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2
fornecidos pelo usuario via teclado. O programa fica pedindo estes valores e calculando  ́
ate que o usuário entre com um valor para resistencia igual a zero. ˆ

R = R1 ∗ R2 / R1 + R2*/

#include <stdio.h>

int main () {

    int r1, r2, res;

    while (1)
    {
        printf("\nDigite o valor de R1: ");
        scanf("%d", & r1);
        printf("Digite o valor de R2: ");
        scanf("%d", & r2);

        if (r1 == 0 || r2 == 0)
        {
            break;
        }
        
        res = r1 * r2 / r1 + r2;
        printf("O valor da resistencia e: %d", res);

    }
    

return 0;

}