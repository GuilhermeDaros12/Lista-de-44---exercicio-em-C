#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    int numero_mes;

    printf("Digite um n�mero de m�s entre 1 e 12: ");
    scanf("%d", &numero_mes);

    if (numero_mes >= 1 && numero_mes <= 12) {
        char *meses[] = {
            "Janeiro",
            "Fevereiro",
            "Mar�o",
            "Abril",
            "Maio",
            "Junho",
            "Julho",
            "Agosto",
            "Setembro",
            "Outubro",
            "Novembro",
            "Dezembro"
        };

        printf("O n�mero %d corresponde ao m�s de %s.\n", numero_mes, meses[numero_mes - 1]);
    } else {
        printf("N�o existe m�s com esse n�mero.\n");
    }
}

