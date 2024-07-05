#include<stdio.h>

int main (){
    float P1, P2, MediaAritmetica;
    printf("Entre com o valor da Primeira Nota: ");
    scanf("%f",&P1);
    printf("Entre com o valor da Segunda Nota: ");
    scanf("%f",&P2);
    
    MediaAritmetica = (P1 + P2)/2;
    
    if (MediaAritmetica >= 5){
        printf("Aluno Aprovado");
    }
    else{
        printf("Aluno Reprovado");
    }
}
