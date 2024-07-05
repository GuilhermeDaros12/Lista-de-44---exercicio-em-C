#include<stdio.h>

int main (){
    int AnoNacimento, Idade;
    printf("Digite o ano de nacimento: ");
    scanf("%d",&AnoNacimento);
    
    Idade = 2023 - AnoNacimento;
    
    if(Idade >= 18){
        printf("\nVoce e maior de idade e pode entrar na boate");
    }
    else{
        printf("\nVoce e menor de idade nao pode entrar na boate");
    }
}
