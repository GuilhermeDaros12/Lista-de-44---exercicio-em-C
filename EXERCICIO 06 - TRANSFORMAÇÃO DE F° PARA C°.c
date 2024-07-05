#include <stdio.h>

int main() {
    float F,C;

    printf("Entre com o valor da temperatura em Fahrenheit(F°) : ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf("A temperatura em Celsius(C°): e:  %.2f\n", C);
}
