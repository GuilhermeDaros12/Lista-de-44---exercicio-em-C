#include<stdio.h>

int main(){
    float Salario, ValorFinanciamento;
    printf("Entre com o salario: R$ ");
    scanf("%f",&Salario);
    printf("Entre com o valor do Financiamento: R$ ");
    scanf("%f",&ValorFinanciamento);
    
    if (ValorFinanciamento <= 5 * Salario) {
        printf("Financiamento Concedido.\n");
    } else {
        printf("Financiamento Negado.\n");
    }

    printf("Obrigado por nos consultar.\n");
}
