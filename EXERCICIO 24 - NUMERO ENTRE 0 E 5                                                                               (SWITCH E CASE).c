#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um valor entre 0 e 5: ");
    scanf("%d", &numero);
    
    switch (numero) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Tr�s\n");
            break;
        case 4:
            printf("Quatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        default:
            printf("Valor fora do intervalo.\n");
    }
}

