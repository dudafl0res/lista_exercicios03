#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) { // resto 0 = par
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}
