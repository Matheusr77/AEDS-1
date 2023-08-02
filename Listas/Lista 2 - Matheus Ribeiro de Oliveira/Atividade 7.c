//Atividade 7

/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.*/

#include <stdio.h>

int main () {

    int num, media, i = 0, cont = 0, cont_num = 0;

    while (cont < 10)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", & num);

        cont ++;

        if (num >= 0)
        {
            i ++;
            cont_num = cont_num + num;
        }

    }
    
    media = cont_num / i;
    printf("A media da soma dos numeros inteiros e positivos e %d", media);


return 0;

}