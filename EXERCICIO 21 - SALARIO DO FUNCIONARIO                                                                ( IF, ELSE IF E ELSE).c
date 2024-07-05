#include <stdio.h>

int main() {
    float ValorFixo, TotalVendas, SalarioFinal;
    int NumFaltas;

    printf("Digite o valor da parte fixa do salario: R$ ");
    scanf("%f", &ValorFixo);

    printf("Digite o total de vendas no periodo: ");
    scanf("%f", &TotalVendas);

    printf("Digite o numero de faltas do vendedor: ");
    scanf("%d", &NumFaltas);

    float percentual = 0.0;

    if (TotalVendas <= 1500) {
        percentual = 0.02;
    } else if (TotalVendas <= 3000) {
        percentual = 0.03;
    } else if (TotalVendas <= 6000) {
        percentual = 0.05;
    } else {
        percentual = 0.06;
    }

SalarioFinal = ValorFixo + (TotalVendas * percentual) - (NumFaltas * 5);

    printf("O salario final do vendedor e: %.2f\n", SalarioFinal);
}

