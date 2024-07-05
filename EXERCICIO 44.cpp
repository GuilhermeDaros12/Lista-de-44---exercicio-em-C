#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int valor, dentro_intervalo = 0, fora_intervalo = 0;

    printf("Digite 10 valores, um de cada vez.");

    for (int i = 1; i <= 10; i++) {
        printf("\nValor %i: ", i);
        scanf("%i", &valor);

        if (valor >= 10 && valor <= 20) {
            dentro_intervalo++;
        } else {
            fora_intervalo++;
        }
    }

    printf("\nValores dentro do intervalo [10, 20]: %i", dentro_intervalo);
    printf("\nValores fora do intervalo [10, 20]: %i", fora_intervalo);

}

