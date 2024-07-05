#include <stdio.h>

int main() {
    int idade, sexo, corOlhos, corCabelos;
    int maiorIdade = -1; 
    int contadorMulheres = 0;

    while (1) {
        printf("Digite a idade (ou idade negativa para encerrar): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break; 
        }

        printf("Digite o sexo (1 - masculino, 2 - feminino): ");
        scanf("%d", &sexo);

        if (sexo == 2) { 
            printf("Digite a cor dos olhos (1 - azuis, 2 - verdes, 3 - castanhos): ");
            scanf("%d", &corOlhos);

            printf("Digite a cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos): ");
            scanf("%d", &corCabelos);

        
            if (idade > maiorIdade) {
                maiorIdade = idade;
            }

            if (idade >= 18 && idade <= 35 && corOlhos == 2 && corCabelos == 1) {
                contadorMulheres++;
            }
        }
    }

    printf("Maior idade entre os habitantes: %d\n", maiorIdade);
    printf("Quantidade de mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros: %d\n", contadorMulheres);

    return 0;
}

