//Atividade 49

/*Enunciado muito grande*/

#include <stdio.h>

int main() {
    float salarioCarlos, salarioJoao, rendimentoCarlos, rendimentoJoao;
    int meses = 0;

    printf("Digite o valor do salario de Carlos: ");
    scanf("%f", &salarioCarlos);

    salarioJoao = salarioCarlos / 3.0;
    rendimentoCarlos = salarioCarlos * 0.02;
    rendimentoJoao = salarioJoao * 0.05;

    while (salarioJoao <= salarioCarlos) {
        salarioCarlos += rendimentoCarlos;
        salarioJoao += rendimentoJoao;
        meses++;
    }

    printf("Para que o valor pertencente a Joao iguale ou ultrapasse o valor pertencente a Carlos, serao necessarios %d meses.\n", meses);

    return 0;
}
