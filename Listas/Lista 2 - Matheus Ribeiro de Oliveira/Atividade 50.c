//Atividade 50

/*Chico tem 1.50 metro e cresce 2 centımetros por ano, enquanto Ze tem 1.10 metros e  ́
cresce 3 centımetros por ano. Escreva um programa que calcule e imprima quantos anos
serao necessarios para que Ze seja maior que Chico.  ́*/

#include <stdio.h>

int main () {

    float alturaChico = 1.50, alturaZe = 1.10;
    int anos = 0;

    while (alturaZe <= alturaChico) {
        alturaChico += 0.02; // cresce 2cm por ano
        alturaZe += 0.03; // cresce 3cm por ano
        anos++;
    }

    printf("\nSerao necessarios %d anos para que Ze seja mais alto que Chico.\n", anos);


return 0;

}