#include <stdio.h>

int main() {
    float cotacaoDolar, quantidadeDolares, valorReais;

    printf("Digite a cota��o do dolar (em reais):R$ ");
    scanf("%f", &cotacaoDolar);

    printf("Digite a quantidade de dolares: R$ ");
    scanf("%f", &quantidadeDolares);

    valorReais = cotacaoDolar * quantidadeDolares;

    printf("O valor correspondente em reais �: R$ %.2f\n", valorReais);
}
