#include<stdio.h>

int main (){
    int n1;
    printf("Entre com o valor: ");
    scanf("%i",&n1);
    
    if (n1 >= 100 && n1 <= 200) {
        printf("O número está no intervalo entre 100 e 200.\n");
    } else {
        printf("O número não está no intervalo entre 100 e 200.\n");
    }
}
