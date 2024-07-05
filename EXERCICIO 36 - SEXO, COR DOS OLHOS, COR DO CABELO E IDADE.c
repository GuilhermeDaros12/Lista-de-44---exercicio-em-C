#include <stdio.h>

int main() {
    int sexo, corOlhos, corCabelos, idade;
    int contador = 0;
    int totalPessoas = 0;
    int totalHomens = 0;
    int totalMulheres = 0;
    int totalOlhosAzuis = 0;
    int totalOlhosVerdes = 0;
    int totalOlhosCastanhos = 0;
    int totalCabelosLouros = 0;
    int totalCabelosCastanhos = 0;
    int totalCabelosPretos = 0;
    int somaIdades = 0;

    printf("Digite os dados dos habitantes (para encerrar, digite sexo = 0):\n");

    while (1) {
        printf("Sexo (1 - masculino, 2 - feminino): ");
        scanf("%d", &sexo);

        if (sexo == 0) {
            break;
        }

        printf("Cor dos olhos (1 - azuis, 2 - verdes, 3 - castanhos): ");
        scanf("%d", &corOlhos);

        printf("Cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos): ");
        scanf("%d", &corCabelos);

        printf("Idade: ");
        scanf("%d", &idade);

        contador++;

        if (sexo == 1) {
            totalHomens++;
        } else if (sexo == 2) {
            totalMulheres++;
        }

        if (corOlhos == 1) {
            totalOlhosAzuis++;
        } else if (corOlhos == 2) {
            totalOlhosVerdes++;
        } else if (corOlhos == 3) {
            totalOlhosCastanhos++;
        }

    
        if (corCabelos == 1) {
            totalCabelosLouros++;
        } else if (corCabelos == 2) {
            totalCabelosCastanhos++;
        } else if (corCabelos == 3) {
            totalCabelosPretos++;
        }

        somaIdades += idade;

        totalPessoas++;
    }

    printf("\nResultados da pesquisa:\n");
    printf("Total de habitantes: %d\n", contador);
    printf("Total de homens: %d\n", totalHomens);
    printf("Total de mulheres: %d\n", totalMulheres);
    printf("Total de pessoas com olhos azuis: %d\n", totalOlhosAzuis);
    printf("Total de pessoas com olhos verdes: %d\n", totalOlhosVerdes);
    printf("Total de pessoas com olhos castanhos: %d\n", totalOlhosCastanhos);
    printf("Total de pessoas com cabelos louros: %d\n", totalCabelosLouros);
    printf("Total de pessoas com cabelos castanhos: %d\n", totalCabelosCastanhos);
    printf("Total de pessoas com cabelos pretos: %d\n", totalCabelosPretos);
    printf("Idade media da população: %.2f\n", (float)somaIdades / totalPessoas);

}

