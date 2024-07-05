#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1,n2,soma,subtracao,multiplicacao,divisao;
	printf("Entre com o primeiro valor: \n");
	scanf("%d",&n1);
	printf("Entre com o segundo valor: \n");
	scanf("%d",&n2);
	
	soma = n1 + n2;
	printf("\nA soma é: %d",soma);
	
	subtracao = n1 - n2;
	printf("\nA subtracão é: %d",subtracao);
	
	multiplicacao = n1 * n2;
	printf("\nA multiplicacão é: %d",multiplicacao);
	
	divisao = n1 / n2;
	printf("\nA divisão é: %d",divisao);
}
