//Atividade 19

/*Enunciado grande*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int matricula[5], i;
    float mediaProvas[5], mediaTrabalhos[5], notaFinal[5];
    float maiorNota = 0, somaNotas = 0, mediaNotas;
    int indiceMaiorNota;
    
    for (i = 0; i < 5; i++) 
    {
        printf("Digite a matrícula do aluno %d: ", i+1);
        scanf("%d", &matricula[i]);
        printf("Digite a média das provas do aluno %d: ", i+1);
        scanf("%f", &mediaProvas[i]);
        printf("Digite a média dos trabalhos do aluno %d: ", i+1);
        scanf("%f", &mediaTrabalhos[i]);
        
        notaFinal[i] = mediaProvas[i] + mediaTrabalhos[i];
        
        somaNotas += notaFinal[i];

        if (notaFinal[i] > maiorNota) 
        {
            maiorNota = notaFinal[i];
            indiceMaiorNota = i;
        }
    }

    printf("A matrícula do aluno com a maior nota final é: %d\n", matricula[indiceMaiorNota]);
    
    mediaNotas = somaNotas / 5.0;
    
    printf("A média aritmética das notas finais é: %.2f\n", mediaNotas);
    
    return 0;
}
