#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int codigo, produtos = 100;
    float preco_custo, preco_novo, total_preco_custo = 0, total_preco_novo = 0;


    for (int i = 1; i <= produtos; i++) {
        printf("Produto %i", i);
        printf("\nCódigo: ");
        scanf("%i", &codigo);
        printf("Preço de custo: ");
        scanf("%f", &preco_custo);

        preco_novo = preco_custo * 1.2;

        total_preco_custo += preco_custo;
        total_preco_novo += preco_novo;

        printf("Código: %i\n", codigo);
        printf("Preço novo: %.2f\n", preco_novo);
    }

    float media_preco_custo = total_preco_custo / produtos;
    float media_preco_novo = total_preco_novo / produtos;

    printf("Média dos preços de custo: %.2f\n", media_preco_custo);
    printf("Média dos preços novos: %.2f\n", media_preco_novo);

    return 0;
}

