#include<stdio.h>

int main (){
    float n1;
    printf("Entre com um valor: ");
    scanf("%f",&n1);
    
    if(n1 > 10){
        printf("O numero e maior que 10");
    }
     else if(n1 <= 10){
        printf("O numero e menor ou igual a 10");
    }
}

