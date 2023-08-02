//Atividade 22

/*Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
desconto para pagamento a vista é de 10% sobre o valor total, calcular o valor a ser  ́
pago a vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor `
a ser pago a vista. `*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char nomeMercadoria[100];
    float valorTotal, valorDesconto, valorAVista;

    printf("Digite o nome da mercadoria: ");
    fgets(nomeMercadoria, 100, stdin);

    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valorTotal);

    valorDesconto = valorTotal * 0.1;
    valorAVista = valorTotal - valorDesconto;

    printf("Nome da mercadoria: %s", nomeMercadoria);
    printf("Valor total: R$ %.2f\n", valorTotal);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor a ser pago à vista: R$ %.2f\n", valorAVista);

    return 0;
}
