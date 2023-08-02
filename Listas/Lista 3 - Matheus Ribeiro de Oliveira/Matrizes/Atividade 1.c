//Atividade 1

/*Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int mat[4][4], cont = 0;
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            
            printf("Digite um numero para a linha %d e coluna %d da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
            
        }
    }
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
        
        if(mat[i][j] > 10)
        {
            cont++;
        }
        }
    }
    
    printf("Está matriz tem %d numeros maiores que 10", cont);

    return 0;
}