#include <stdio.h>

void printNumberInPortuguese(int Numero) {
    switch (Numero) {
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
            printf("Três\n");
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

void printNumberInEnglish(int Numero) {
    switch (Numero) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        default:
            printf("Value out of range.\n");
    }
}

int main() {
    int Numero;
    int Escolha;

    printf("Digite um valor entre 0 e 5: ");
    scanf("%d", &Numero);

    printf("Escolha o idioma:\n");
    printf("1 - Portugues\n");
    printf("2 - English\n");
    scanf("%d", &Escolha);

    switch (Escolha) {
        case 1:
            printNumberInPortuguese(Numero);
            break;
        case 2:
            printNumberInEnglish(Numero);
            break;
        default:
            printf("Opção inválida.\n");
    }
}

