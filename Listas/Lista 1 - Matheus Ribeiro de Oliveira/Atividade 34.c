//Atividade 34

/*Leia a nota e o numero de faltas de um aluno, e escreva seu conceito. De acordo com a  ́
tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.  ̃*/

#include <stdio.h>

    int main () {

        float nota;
        int faltas;

        printf("Digite a nota do aluno: ");
        scanf("%f", & nota);
        printf("Digite o numero de faltas: ");
        scanf("%f", & faltas);

        if (faltas <= 20)

          if (nota >= 9.0 && nota <= 10.0)
        {
            printf("Conceito: A");
        }
        
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("Conceito: B");
        } 

        else if (nota >= 5.0 && nota <= 7.4)
        {
            printf("Conceito: C");
        } 

        else if (nota >= 4.0 && nota <= 4.9)
        {
            printf("Conceito: D");
        } 

        else if (nota >= 0.0 && nota <= 3.9)
        {
            printf("Conceito: E");
        } 


        if (faltas > 20)

          if (nota >= 9.0 && nota <= 10.0)
        {
            printf("Conceito: B");
        }
        
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("Conceito: C");
        } 

        else if (nota >= 5.0 && nota <= 7.4)
        {
            printf("Conceito: D");
        } 

        else if (nota >= 4.0 && nota <= 4.9)
        {
            printf("Conceito: E");
        } 

        else if (nota >= 0.0 && nota <= 3.9)
        {
            printf("Conceito: E");
        } 


    return 0;

    }