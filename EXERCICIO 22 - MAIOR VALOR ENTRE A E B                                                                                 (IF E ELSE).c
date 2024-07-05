#include<stdio.h>

int main(){
	int A,B;
	printf("Entre com o valor de A: ");
	scanf("%d",&A);
	printf("Entre com o valor de B: ");
	scanf("%d",&B);
	
	if(A>B){
		printf("O Valor de A e o maior valor",A);
	}
	else{
		printf("O Valor de B e o maior valor",B);
	}
}
