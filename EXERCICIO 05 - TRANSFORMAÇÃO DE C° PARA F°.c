#include <stdio.h>

int main() {
    float C,F;

    printf("Entre com o valor da temperatura em Celsius(C°): ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("A temperatura em Fahrenheit(F°) e:  %.2f\n", F);
}
