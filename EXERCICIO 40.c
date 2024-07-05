#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    int total_habitantes = 1000;
    int contador_mulheres = 0;
    int contador_mulheres_18_25 = 0;
    int contador_mulheres_salario_ate_1500 = 0;
    float soma_salario = 0.0;

    for (int i = 0; i < total_habitantes; i++) {
        int idade, sexo;
        float salario;

        printf("Habitante %d", i + 1);
        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("Sexo (1 - Masculino, 2 - Feminino): ");
        scanf("%d", &sexo);

        printf("Salário: R$");
        scanf("%f", &salario);

        soma_salario += salario;

        if (sexo == 2) {
            contador_mulheres++;

            if (idade >= 18 && idade <= 25) {
                contador_mulheres_18_25++;
            }

            if (salario <= 1500.0) {
                contador_mulheres_salario_ate_1500++;
            }
        }
    }

    float media_salario = soma_salario / total_habitantes;

    float porcentagem_mulheres_18_25 = (float)contador_mulheres_18_25 / contador_mulheres * 100.0;

    printf("\nResultados da pesquisa:\n");
    printf("\nMédia de salário do grupo: R$%.2f", media_salario);
    printf("\nPorcentagem de mulheres com idade entre 18 e 25 anos: %.2f%%", porcentagem_mulheres_18_25);
    printf("\nQuantidade de mulheres com salário até R$1500,00: %d", contador_mulheres_salario_ate_1500);
}

