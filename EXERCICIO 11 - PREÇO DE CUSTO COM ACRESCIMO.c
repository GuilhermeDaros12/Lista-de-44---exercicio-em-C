#include<stdio.h>

int main (){
    float PrecoDeCusto,Percentual,ValorDeVenda;
    printf("Insira o preco de custo do produto: R$ ");
    scanf("%f",&PrecoDeCusto);
    printf("Insira um percentual de acrescimo do produto (em %): ");
    scanf("%f",&Percentual);
    
    ValorDeVenda = PrecoDeCusto + (PrecoDeCusto * Percentual / 100);
    
    printf("\nO valor da venda do produto sera de: R$ %.2f",ValorDeVenda);
}
