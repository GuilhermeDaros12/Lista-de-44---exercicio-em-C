#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Digite numeros (0 para encerrar):\n");
    
    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero >= 100 && numero <= 200) {
            contador++;
        }
    }

    printf("Voce digitou %d numero(s) entre 100 e 200.\n", contador);
}

