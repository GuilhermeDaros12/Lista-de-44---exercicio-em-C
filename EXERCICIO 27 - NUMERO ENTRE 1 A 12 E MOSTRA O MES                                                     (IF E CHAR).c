#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    int numero_mes;

    printf("Digite um número de mês entre 1 e 12: ");
    scanf("%d", &numero_mes);

    if (numero_mes >= 1 && numero_mes <= 12) {
        char *meses[] = {
            "Janeiro",
            "Fevereiro",
            "Março",
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

        printf("O número %d corresponde ao mês de %s.\n", numero_mes, meses[numero_mes - 1]);
    } else {
        printf("Não existe mês com esse número.\n");
    }
}

