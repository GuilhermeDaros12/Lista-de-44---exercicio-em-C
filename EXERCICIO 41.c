#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int codigo, produtos = 100;
    float preco_custo, preco_novo, total_preco_custo = 0, total_preco_novo = 0;


    for (int i = 1; i <= produtos; i++) {
        printf("Produto %i", i);
        printf("\nC�digo: ");
        scanf("%i", &codigo);
        printf("Pre�o de custo: ");
        scanf("%f", &preco_custo);

        preco_novo = preco_custo * 1.2;

        total_preco_custo += preco_custo;
        total_preco_novo += preco_novo;

        printf("C�digo: %i\n", codigo);
        printf("Pre�o novo: %.2f\n", preco_novo);
    }

    float media_preco_custo = total_preco_custo / produtos;
    float media_preco_novo = total_preco_novo / produtos;

    printf("M�dia dos pre�os de custo: %.2f\n", media_preco_custo);
    printf("M�dia dos pre�os novos: %.2f\n", media_preco_novo);

    return 0;
}

