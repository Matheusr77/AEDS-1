//Atividade 25

/*Enunciado grande demais*/

#include <stdio.h>
#include <math.h>

    int main () {

        float delta, a, b, c, x1, x2;

        printf("Digite o termo a: ");
        scanf("%f", & a);
        printf("Digite o termo b: ");
        scanf("%f", & a);
        printf("Digite o termo c: ");
        scanf("%f", & c);

        if (a == 0)
        {
            printf("Nao e equacao de segundo grau.\n");
        }
        
        // Equação de 2º grau: ax^2 + bx + c = 0

        //Calculando Delta

        delta = pow(b, 2) - 4 * a * c;

        if (a == 0)
        {
            printf("Nao e uma equacao de 2 grau.");
        }
        

        if (delta < 0)
        {
            printf("Nao exite raiz.");
        }

        else if (delta == 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("Raiz unica. \nRaiz: %2.f", x1);
        }      

        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Duas raizes reais. \nRaizes: %.2f e %.2f", x1, x2);
        }


    return 0;

    }