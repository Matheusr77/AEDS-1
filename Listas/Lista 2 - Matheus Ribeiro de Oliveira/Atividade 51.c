//Atividade 51

/*Um funcionario recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996  ́
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao
dobro do ano anterior. Faça programa que determine o salario atual do funcionario.  ́*/

#include <stdio.h>

int main () {

    int ano = 1995;
    float salario = 2000.0;
    float aumento = 0.015;  // aumento de 1.5% em 1996
    float aumento_anterior = aumento;

    while (ano < 2023) {  // assume que o ano atual é 2023
        ano++;
        salario += salario * aumento;
        aumento_anterior *= 2;
        aumento = aumento_anterior / 100;
    }

    printf("\nSalario atual do funcionario: R$ %.2f\n", salario);

    return 0;
}
