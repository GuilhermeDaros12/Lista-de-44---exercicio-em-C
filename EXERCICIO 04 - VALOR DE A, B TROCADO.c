#include <stdio.h>

int main() {
    int Valor_A, Valor_B, Temp;
    printf("Entre com o valor da variavel A: ");
    scanf("%i",&Valor_A);
    printf("Entre com o valor da variavel B: ");
    scanf("%i",&Valor_B);
    
    Temp = Valor_A;
    Valor_A = Valor_B;
    Valor_B = Temp;
    
    printf("Valores trocados:\n");
    printf("A = %i\n", Valor_A);
    printf("B = %i\n", Valor_B);
}
