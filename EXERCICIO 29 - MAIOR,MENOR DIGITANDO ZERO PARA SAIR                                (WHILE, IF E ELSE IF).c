#include <stdio.h>

int main() {
    int valor, maior, menor;
    
    printf("Digite um valor (ou 0 para sair): ");
    scanf("%d", &valor);
    maior = valor;
    menor = valor;

    while (valor != 0) {
        if (valor > maior) {
            maior = valor;
        } else if (valor < menor) {
            menor = valor;
        }

        printf("Digite outro valor (ou 0 para sair): ");
        scanf("%d", &valor);
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}

