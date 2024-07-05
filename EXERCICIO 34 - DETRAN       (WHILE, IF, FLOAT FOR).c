#include <stdio.h>

int main() {
    int numero_carteira, numero_multas, maior_numero_multas = 0, motorista_maior_multas = 0;
    float valor_multa, total_recursos_arrecadados = 0;

    while (1) {
        printf("Digite o número da carteira de motorista (ou 0 para encerrar): ");
        scanf("%d", &numero_carteira);

        if (numero_carteira == 0) {
            break;
        }

        printf("Digite o número de multas: ");
        scanf("%d", &numero_multas);

        float divida_motorista = 0;

        for (int i = 0; i < numero_multas; i++) {
            printf("Digite o valor da multa %d: ", i + 1);
            scanf("%f", &valor_multa);
            divida_motorista += valor_multa;
            total_recursos_arrecadados += valor_multa;
        }

        printf("A dívida do motorista de carteira %d é: R$ %.2f\n", numero_carteira, divida_motorista);

        if (numero_multas > maior_numero_multas) {
            maior_numero_multas = numero_multas;
            motorista_maior_multas = numero_carteira;
        }
    }

    printf("Total de recursos arrecadados: R$ %.2f\n", total_recursos_arrecadados);
    printf("O motorista com mais multas possui a carteira número: %d\n", motorista_maior_multas);

}

