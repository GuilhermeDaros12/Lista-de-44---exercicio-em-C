#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int numero;
    int produto_impares = 1; 
    int soma_pares = 0;

    do {
         printf("Digite números inteiros e positivos (0 para encerrar):");
        scanf("%d", &numero);

        if (numero > 0) {
            if (numero % 2 == 0) {
                
                soma_pares += numero;
            } else {
                
                produto_impares *= numero;
            }
        } else if (numero < 0) {
            printf("\nPor favor, digite apenas números inteiros positivos.");
        }
    } while (numero != 0);

    
    printf("\nProduto dos números ímpares: %d", produto_impares);
    printf("\nSoma dos números pares: %d\n", soma_pares);

}

