#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    float salario, maiorSalario = 0;
    int numFilhos, totalHabitantes = 0, totalSalarioMenor2000 = 0;
    float somaSalario = 0, somaFilhos = 0;

    printf("Digite o salário do habitante (ou 0 para sair): ");
    scanf("%f", &salario);

    while (salario != 0) {
        printf("Digite o número de filhos do habitante: ");
        scanf("%d", &numFilhos);

        somaSalario += salario;
        somaFilhos += numFilhos;
        totalHabitantes++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario < 2000) {
            totalSalarioMenor2000++;
        }

        printf("Digite o salário do habitante (ou 0 para sair): ");
        scanf("%f", &salario);
    }

    if (totalHabitantes > 0) {
        float mediaSalario = somaSalario / totalHabitantes;
        float mediaFilhos = somaFilhos / totalHabitantes;
        float percentualSalarioMenor2000 = (totalSalarioMenor2000 / (float)totalHabitantes) * 100;

        printf("Média de salário da população: %.2f\n", mediaSalario);
        printf("Média do número de filhos: %.2f\n", mediaFilhos);
        printf("Maior salário dos habitantes: %.2f\n", maiorSalario);
        printf("Percentual de pessoas com salário menor que R$ 2000,00: %.2f%%\n", percentualSalarioMenor2000);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }
}


