//Atividade 7

/*Crie um programa que compara duas strings (não use a função strcmp).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    int i = 0;
    
    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    
    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);
    
    while (str1[i] == str2[i]) 
    {
        if (str1[i] == '\0') 
        {
            printf("As strings são iguais.\n");
            return 0;
        }
        
        i++;
    }
    
    if (str1[i] < str2[i]) 
    {
        printf("A primeira string é menor que a segunda string.\n");
    } 
    
    else 
    {
        printf("A primeira string é maior que a segunda string.\n");
    }
    
    return 0;
}
