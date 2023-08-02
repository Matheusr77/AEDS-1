//Atividade 59

/*Escreva um programa que leia o numero de habitantes de uma determinada cidade, o  ́
valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mesˆ
e o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o  ́
maior, o menor e a media do consumo dos habitantes; e por fim o total do consumo de  ́
cada categoria de consumidor.*/

#include <stdio.h>

int main() {
    int habitantes, codigo, num_residencial = 0, num_comercial = 0, num_industrial = 0;
    float kwh, consumo, consumo_total = 0, maior_consumo = 0, menor_consumo = 0;
    float consumo_residencial = 0, consumo_comercial = 0, consumo_industrial = 0, media_consumo;

    printf("Informe o numero de habitantes: ");
    scanf("%d", &habitantes);

    printf("Informe o valor do kWh: ");
    scanf("%f", &kwh);

    for (int i = 1; i <= habitantes; i++) {
        printf("Informe o consumo do mes do habitante %d: ", i);
        scanf("%f", &consumo);

        printf("Informe o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &codigo);

        consumo_total += consumo;

 
        if (i == 1) {
            maior_consumo = consumo;
            menor_consumo = consumo;
        } else {
            if (consumo > maior_consumo) {
                maior_consumo = consumo;
            }
            if (consumo < menor_consumo) {
                menor_consumo = consumo;
            }
        }

        switch (codigo) {
            case 1:
                consumo_residencial += consumo;
                num_residencial++;
                break;
            case 2:
                consumo_comercial += consumo;
                num_comercial++;
                break;
            case 3:
                consumo_industrial += consumo;
                num_industrial++;
                break;
            default:
                printf("Codigo invalido. Por favor, informe 1 para residencial, 2 para comercial ou 3 para industrial.\n");
                i--;
                break;
        }
    }

    media_consumo = consumo_total / habitantes;

    printf("\n");
    printf("Maior consumo: %.2f\n", maior_consumo);
    printf("Menor consumo: %.2f\n", menor_consumo);
    printf("Media de consumo: %.2f\n", media_consumo);
    printf("Consumo total residencial: %.2f\n", consumo_residencial);
    printf("Consumo total comercial: %.2f\n", consumo_comercial);
    printf("Consumo total industrial: %.2f\n", consumo_industrial);

    return 0;
}
