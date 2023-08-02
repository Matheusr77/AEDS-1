//Atividade 34

/*Faça um programa que calcule o menor numero divisıvel por cada um dos numeros de 1  ́
a 20? Ex: 2520 e o menor numero que pode ser dividido por cada um dos numeros de 1  ́
a 10, sem sobrar resto.*/

#include <stdio.h>

int main() {

    int mmc = 1;

    for (int i = 1; i <= 20; i++) 
    {
        int j = mmc;

        while (j % i != 0) 
        {
            j += mmc;
        }
        
        mmc = j;
    }

    printf("O menor numero divisivel por todos os numeros de 1 a 20 e: %d\n", mmc);

    return 0;
}
