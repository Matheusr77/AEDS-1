//Atividade 33

/*Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo,
calcule e escreva o preço novo, e escreva uma mensagem em fução do preço novo (de  ̃
acordo com a segunda tabela).*/

#include <stdio.h>

    int main () {

        float preco, preco_novo;

        printf("Digite o preco antigo: ");
        scanf("%f", & preco);

        
        if (preco < 50)
        {
            preco_novo = preco * 1.05;
            printf("O preco novo e: %.2f", preco_novo);
        }
        
        else if (preco >= 50 && preco <= 100)
        {
            preco_novo = preco * 1.1;
            printf("O preco novo e: %.2f", preco_novo);
        }

        else if (preco > 100)
        {
            preco_novo = preco * 1.15;
            printf("O preco novo e: %.2f", preco_novo);
        }

        if (preco_novo < 80)
        {
            printf("\nProduto barato.");
        }

        else if (preco_novo >= 80 && preco_novo <= 120)
        {
            printf("\nProduto razoavel.");
        }
        
        else if (preco_novo >= 120 && preco_novo <= 200)
        {
            printf("\nProduto caro.");
        }

        else if (preco_novo > 200)
        {
            printf("\nProduto muito caro.");
        }


    return 0;

    }