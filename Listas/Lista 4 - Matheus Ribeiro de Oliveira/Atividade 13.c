//Atividade 13

/*Ler uma frase e contar quantos caracteres são espaços em brancos. Lembre-se que
uma frase é um conjunto de caracteres (vetor).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[100];
    int espacos = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            espacos++;
        }
    }

    printf("A frase possui %d espacos em branco.\n", espacos);

    return 0;
}
