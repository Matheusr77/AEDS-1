//Atividade 20

/*Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo 
e, se forem, de e um triângulo escaleno, equilâtero ou isóscele, considerando os seguin-  ́
tes conceitos:
• O comprimento de cada lado de um triângulo e menor do que a soma dos outros  ́
dois lados.
• Chama-se equilatero o triângulo que tem três lados iguais. 
• Denominam-se isosceles o triângulo que tem o comprimento de dois lados iguais. 
• Recebe o nome de escaleno o triangulo que tem os três lados diferentes.*/

#include <stdio.h>

    int main () {

        float A, B, C;

        printf("Digite o a medida de A do triangulo: ");
        scanf("%f", & A);
        printf("Digite o a medida de B do triangulo: ");
        scanf("%f", & B);
        printf("Digite o a medida de C do triangulo: ");
        scanf("%f", & C);

        if ((A + B > C) && (A + C > B) && (C + B > A))
            if (A == B && B == C)
        
        {
            printf("Este e um triangulo equilatero.");
        }
        
        else if ((A == B || A == C || B == C))
        {
            printf("Este e um triangulo isosceles.");
        }
        
        else if ((A != B) && (A != C) && (B != C))
        {
            printf("Este e um triangulo escaleno");
        }
        

    return 0;

    }