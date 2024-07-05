#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int n;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    printf("Tabuada de %d:\n", n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
}

