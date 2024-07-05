#include<stdio.h>

int main(){
	int n1, n2;
	int Escolha;
	printf("Entre com o primeiro valor: ");
	scanf("%d",&n1);
	printf("Entre com o segundo valor: ");
	scanf("%d",&n2);
	
	printf("Escolha a Operacao: \n");
	printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &Escolha);

	switch (Escolha) {
        case 1:
            printf("Resultado da adicao: %d\n", n1 + n2);
            break;
        case 2:
            printf("Resultado da subtracao: %d\n", n1 - n2);
            break;
        case 3:
            printf("Resultado da multiplicacao: %d\n", n1 * n2);
            break;
        case 4:
            if (n2 != 0) {
                printf("Resultado da divisao: %.2f\n", (float) n1 / n2);
            } else {
                printf("Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Operacao invalida.\n");
    } 
}


