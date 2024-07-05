#include<stdio.h>

int main (){
	int N1;
	printf("Entre com um numero: ");
	scanf("%d",&N1);
	
	if(N1 <= 10){
		printf("F1\n");
	}
	else if(N1 <= 100){
		printf("F2\n");
	}
	else{
		printf("F3\n");
	}
}
