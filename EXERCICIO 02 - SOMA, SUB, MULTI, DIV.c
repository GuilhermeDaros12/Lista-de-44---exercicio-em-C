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
	printf("\nA soma �: %d",soma);
	
	subtracao = n1 - n2;
	printf("\nA subtrac�o �: %d",subtracao);
	
	multiplicacao = n1 * n2;
	printf("\nA multiplicac�o �: %d",multiplicacao);
	
	divisao = n1 / n2;
	printf("\nA divis�o �: %d",divisao);
}
