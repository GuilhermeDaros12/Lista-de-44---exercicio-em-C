#include <stdio.h>

int main() {
    float consumo_medio, distancia_total, combustivel_gasto;
    printf("Entre com a distancia percorrida (Km): ");
    scanf("%f",&distancia_total);
    printf("Entre com o combustivel gasto (em Litros): ");
    scanf("%f",&combustivel_gasto);

    if(combustivel_gasto > 0){
        consumo_medio = distancia_total / combustivel_gasto;
        printf("\nO Consumo Medio do automovovel e de: %.2f km/h", consumo_medio);
    }
    else{
        printf("\nErro, O total de combustível gasto deve ser maior que zero");
    }
}
