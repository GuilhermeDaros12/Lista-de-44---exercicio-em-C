#include <stdio.h>

int main() {
    int numero_semana;

    printf("Digite um número de mes entre 1 e 7: ");
    scanf("%d", &numero_semana);

    if (numero_semana >= 1 && numero_semana <= 7) {
        char *semana[] = {
            "Segunda-Feira",
            "Terça-Feira",
            "Quarta-Feira",
            "Quinta-Feira",
            "Sexta-Feira",
            "Sabado",
            "Domingo"
        };

        printf("O numero %d corresponde ao dia da semana que e %s.\n", numero_semana, semana[numero_semana - 1]);
    } else {
        printf("Nao existe nenhum dia da semana com esse numero.\n");
    }
}

