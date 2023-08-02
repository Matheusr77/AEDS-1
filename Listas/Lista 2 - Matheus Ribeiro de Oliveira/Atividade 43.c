//Atividade 43

/*Faça um programa que leia um numero indeterminado de idades de indivıduos (pare
quando for informada a idade 0), e calcule a idade media desse grupo.  ́*/

#include <stdio.h>

int main () {

    int idade, i = 0, media = 0;

    while (1)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        i++;

        media = media + idade;

        if (idade == 0)
        {
            media = media / i;
            break;
        }
        
    }
     
    printf("A media e: %d", media);


return 0;

}