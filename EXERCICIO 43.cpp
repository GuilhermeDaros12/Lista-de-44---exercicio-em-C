#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int numeros[50];
    int somatorio = 0;

    printf("Digite 50 números inteiros: ");

    for (int i = 0; i < 50; i++) {
        scanf("%d", &numeros[i]);

        if (numeros[i] < 0) {
            somatorio += numeros[i];
        }
    }

    printf("\nO somatório dos números negativos é: %i", somatorio);

}

