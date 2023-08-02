//Atividade 27

/*Em Matematica, o número harmónico designado por H(n) define-se como sendo a soma
da serie harmónica:  ́
H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).*/

#include <stdio.h>

int main () {

    int n, i = 1;
    float hn = 0.0;
    
    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);
    
    while (i <= n) {
        hn += 1.0/i;
        i++;
    }
    
    printf("O valor de H(%d) = %.4lf\n", n, hn);



return 0;

}