#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int idade1, idade2, AnoAtual;
    
    printf("Digite o ano atual: ");
    scanf("%d",&AnoAtual);

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    if (idade1 < idade2) {
        printf("%s é a pessoa mais nova, nascida em %d.\n", nome1, AnoAtual - idade1);
    } else if (idade2 < idade1) {
        printf("%s é a pessoa mais nova, nascida em %d.\n", nome2, AnoAtual - idade2);
    } else {
        printf("Ambas as pessoas têm idades iguais.\n");
    }
}
