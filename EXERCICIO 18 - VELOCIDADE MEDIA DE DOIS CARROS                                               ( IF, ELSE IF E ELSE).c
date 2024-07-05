#include <stdio.h>

int main() {
    float distanciaCarro1, tempoCarro1, velocidadeMediaCarro1;
    float distanciaCarro2, tempoCarro2, velocidadeMediaCarro2;

    printf("Digite a distância percorrida pelo carro 1 (em km): ");
    scanf("%f", &distanciaCarro1);

    printf("Digite o tempo levado pelo carro 1 (em horas): ");
    scanf("%f", &tempoCarro1);

    printf("Digite a distância percorrida pelo carro 2 (em km): ");
    scanf("%f", &distanciaCarro2);

    printf("Digite o tempo levado pelo carro 2 (em horas): ");
    scanf("%f", &tempoCarro2);

    velocidadeMediaCarro1 = distanciaCarro1 / tempoCarro1;
    velocidadeMediaCarro2 = distanciaCarro2 / tempoCarro2;

    if (velocidadeMediaCarro1 > velocidadeMediaCarro2) {
        printf("O carro 1 teve maior velocidade média.\n");
    } else if (velocidadeMediaCarro2 > velocidadeMediaCarro1) {
        printf("O carro 2 teve maior velocidade média.\n");
    } else {
        printf("Os carros tiveram a mesma velocidade média.\n");
    }
}
