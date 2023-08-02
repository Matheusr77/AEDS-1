//Atividade 3

/*Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem ͞FIM!͟ após a contagem.*/

#include <stdio.h>

int main () {


    int cont = 11;

    while (cont > 0)
    {
        cont --;
        printf("%d ", cont);
    }

    printf("\nFIM!");

return 0;

}