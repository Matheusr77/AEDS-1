//Atividade 5

/*Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

#include <stdio.h>

int main () {

    int num = 0, cont_num = 0, cont = 0;

    while (cont < 10)
    {
        printf("Digite um valor: ");
        scanf("%d", & num);

        cont ++;
        cont_num = cont_num + num;
    }
    
    printf("A soma de todos os valores e: %d", cont_num);

return 0;

}