#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    float alturaJoao = 1.45;
    float alturaMaria = 1.57;
    float crescimentoJoao = 0.23;
    float crescimentoMaria = 0.15;
    int anos = 0;

    while (alturaJoao <= alturaMaria) {
        alturaJoao += crescimentoJoao;
        alturaMaria += crescimentoMaria;
        anos++;
        
        printf("Ano %d:\n", anos);
        printf("Altura de João: %.2f m\n", alturaJoao);
        printf("Altura de Maria: %.2f m\n", alturaMaria);
        printf("\n");
    }

    printf("Após %d anos, João será mais alto que Maria.\n", anos);
}

