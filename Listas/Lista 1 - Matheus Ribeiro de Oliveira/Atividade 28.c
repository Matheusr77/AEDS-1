//Atividade 28

/*Faça um programa que leia tres números inteiros positivos e efetue o cálculo de uma das  ́
seguintes medias de acordo com um valor numérico digitado pelo usuário: 

(1) Geometrica:  ́
(2) Ponderada:
(3) Harmonica: 
(4) Aritmetica:*/  


#include <stdio.h>
#include <math.h>

    int main () {

        int n1, n2, n3, geo, pon, har, art, media;

        geo = 1;
        pon = 2;
        har = 3;
        art = 4;

        printf("Digite qual media deve ser calculada: \n1 - Geometrica \n2 - Ponderada \n3 - Harmonica \n4 - Aritmetica \nOpcao: ");
        scanf("%d", & media);
        printf("Digite um numero: ");
        scanf("%d", & n1);
        printf("Digite outro numero: ");
        scanf("%d", & n2);
        printf("Digite outro numero: ");
        scanf("%d", & n3);

        if (geo == media)
        {
            geo = pow(n1 * n2 * n3, 1 / 3);
            printf("A media geometrica e: %d", geo);
        }
        
        else if (pon == media)
        {
            pon =(n1 + 2 * n2 + 3 * n3) / 6;
            printf("A media ponderada e: %d", pon);
        }

        else if (har == media)
        {
            har = 3.0 / (1.0 / n1 + 1.0 / n2 + 1.0 / n3) ;
            printf("A media ponderada e: %d", har);
        }

        else if (art == media)
        {
            art = (n1 + n2 + n3) / 3;
            printf("A media ponderada e: %d", art);
        }


    return 0;

    }