//Atividade 41

/**/


#include <stdio.h>

    int main () {
        
        //Variáveis
        float peso;
        float altura;
        float imc;

        printf("Vamos calcular o seu IMC, para isso digite seu peso:");
        scanf("%f",& peso);
        printf("Agora digite a sua altura:");
        scanf("%f",& altura);

        //Calculando o IMC
        imc = peso/(altura*altura);

        if (imc < 18.5)
        {
            printf("A sua classificacao e: Abaixo peso.");
        }

        else if (imc >= 18.6 && imc <= 24.9)
        {
            printf("A sua classificacao e: Saudavel.");
        }    

        else if (imc >= 25.0 && imc <= 29.9)
        {
            printf("A sua classificacao e: Peso em excesso.");
        }    

        else if (imc >= 30.0 && imc <= 34.9)
        {
            printf("A sua classificacao e: Obesidade grau I.");
        }    

        else if (imc >= 35.0 && imc <= 39.9)
        {
            printf("A sua classificacao e: Obesidade Grau II(SEVERA).");
        }    

        else if (imc >= 40.0)
        {
            printf("A sua classificacao e: Obesidade Grau III(MORBIDA).");
        }    


        return 0;
    }
