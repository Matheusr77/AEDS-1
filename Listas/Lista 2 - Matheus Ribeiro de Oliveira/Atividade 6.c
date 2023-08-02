//Atividade 6

/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main () {

    int num, media, cont = 0, cont_num = 0;

    while (cont < 10)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", & num);

        cont ++;
        cont_num = cont_num + num;
    }
    
    media = cont_num / 10;
    printf("A media destes valores e %d", media);


return 0;

}