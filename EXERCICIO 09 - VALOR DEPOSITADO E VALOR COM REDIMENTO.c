#include <stdio.h>

int main() {
    float ValorDepositado, ValorComRedimento;
    float juro = 0.70;
    printf("Digite o valor que foi depositado na conta: R$ ");
    scanf("%f",&ValorDepositado);
    
    ValorComRedimento = ValorDepositado + (ValorDepositado * juro / 100);
    
    printf("O Valor com o rendimento apos um mes sera de: R$ %.2f", ValorComRedimento);
}
