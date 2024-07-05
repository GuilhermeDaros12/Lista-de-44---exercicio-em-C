#include <stdio.h>

int main() {
    char nomeVendedor[20];
    float salarioFixo, totalVendas, salarioFinal;
    printf("Digite o nome do vendedor: ");
    scanf("%s", nomeVendedor);
    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);
    printf("Digite o total de vendas efetuadas (em dinheiro): R$ ");
    scanf("%f", &totalVendas);

    salarioFinal = salarioFixo + (0.15 * totalVendas);

    printf("\nNome do vendedor: %s\n", nomeVendedor);
    printf("Salário fixo: R$ %.2f\n", salarioFixo);
    printf("Salário no final do mês: R$ %.2f\n", salarioFinal);
}
