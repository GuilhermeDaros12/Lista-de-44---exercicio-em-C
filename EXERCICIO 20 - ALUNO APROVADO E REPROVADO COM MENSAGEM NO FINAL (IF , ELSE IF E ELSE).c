#include <stdio.h>

int main() {
    float P1,P2, MediaFinal;
    printf("Entre com a primeira nota: ");
    scanf("%f",&P1);
    printf("Entre com a segunda nota: ");
    scanf("%f",&P2);
    
    MediaFinal = (P1 + P2)/2;
    
    if (MediaFinal >= 7){
        printf("Aluno Aprovado");
    }
    else if(MediaFinal < 4){
        printf("Aluno Reprovado");
    }
    else {
        float nota_final_necessaria = 10 - MediaFinal;
        printf("Na prova final. Precisa tirar pelo menos %.2f para passar.\n", nota_final_necessaria);
    }
}
