//Atividade 22

/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou nao se  ̃
aposentar. As condições para aposentadoria são ̃
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <stdio.h>

    int main () {

        int idade, tempo;

        printf("Qual a sua idade: ");
        scanf("%d", & idade);
        printf("Qual o seu tempo de servico em anos: ");
        scanf("%d", & tempo);

        if (idade == 65)
        {
            printf("Voce pode se aposentar!");
        }

        else if (tempo >= 30)
        {
            printf("Voce pode se aposentar!");
        }

        else if ((idade >= 60) || (tempo >= 25))
        {
            printf("Voce pode se aposentar!");
        }      

        else 
        {
            printf("Voce ainda nao pode se aposentar!");
        }


    return 0;

    }