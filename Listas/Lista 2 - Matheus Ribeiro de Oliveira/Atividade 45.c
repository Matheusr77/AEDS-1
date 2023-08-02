//Atividade 45

/*Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
versa. Voce deve criar um menu com as duas opções de conversão e com uma opção ̃
para finalizar o programa. O usuario poderá fazer quantas converões desejar, sendo  ̃
que o programa so será finalizado quando a opção de finalizar for escolhida.  ̃*/

#include <stdio.h>

int main () {

    int op = 0, num1 = 0, num2 = 0;

    while (1)
    {
        printf("\nEscolha uma opacao: \n[1] Converter km/h para m/s \n[2] Converter m/s para km/s \n[3] Finalizar o programa \n\n");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("Digite o valor para converter: ");
            scanf("%d", &num1);

            num1 = num1 / 3.6;

            printf("Resultado: %d", num1);
        }

        else if (op == 2)
        {
            printf("Digite o valor para converter: ");
            scanf("%d", &num2);

            num2 = num2 * 3.6;

            printf("Resultado: %d", num2);
        }
        
        else if (op == 3)
        {
            break;
        }

    }
    

return 0;

}