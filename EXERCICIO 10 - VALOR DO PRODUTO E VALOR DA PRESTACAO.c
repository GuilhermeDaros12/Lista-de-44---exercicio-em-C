#include<stdio.h>

int main(){
    float ValorDoProduto,ValorDaPrestacao;
    printf("Insira o valor da compra: R$ ");
    scanf("%f",&ValorDoProduto);
    
    ValorDaPrestacao = ValorDoProduto / 5;
    
    printf("\nO valor da prestacao ficou: R$ %.2f", ValorDaPrestacao);
}
