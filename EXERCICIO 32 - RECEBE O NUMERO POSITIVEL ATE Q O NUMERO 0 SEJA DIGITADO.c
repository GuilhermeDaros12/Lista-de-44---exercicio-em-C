#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"");
    int valor;
    int soma = 0;
    int quantidade = 0;
    int media = 0;
    int maior = 0;
    int menor = 0;
    int MediaNumPar = 0;
    int Porcentagem = 0;

    while (1) {
        printf("Insira um número (ou 0 para sair): ");
        scanf("%d", &valor);

        if (valor == 0) {
            break;
        }

        soma += valor;
        quantidade++;

        if (quantidade == 1) {
            media = valor;
            maior = valor;
        } else {
            if (valor > media){
                media = valor;
            }
            if (valor < maior){
                maior = valor;
            }
        }

        if (valor % 2 == 0) {
            menor += valor;
            MediaNumPar++;
        } else {
     	  Porcentagem++;
        }
    }

    if (quantidade> 0) {
        double average = (double) soma / quantidade;
        double averageEven = (double) menor / MediaNumPar;
        double percentageOdd = (double) Porcentagem /quantidade * 100;

        printf("Soma dos números digitados: %d\n", soma);
        printf("Quantidade de números digitados: %d\n", quantidade);
        printf("Média dos números digitados: %.2lf\n", average);
        printf("Maior número digitado: %d\n", media);
        printf("Menor número digitado: %d\n", maior);
        printf("Média dos números pares digitados: %.2lf\n", averageEven);
        printf("Porcentagem de números ímpares digitados: %.2lf%%\n", percentageOdd);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

}


