#include <stdio.h>

int main() {
    int i;
    float n, maior;

    printf("Digite o numero 1: ");
    scanf("%f", &n);
    maior = n; // o primeiro comeca como maior

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &n);
        if (n > maior) {
            maior = n;
        }
    }

    printf("O maior numero foi %.2f\n", maior);

    return 0;
}
