#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int numero;

    while (1) {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        int dobro = numero * 2;
        printf("O dobro de %d é %d\n", numero, dobro);
    }
}
