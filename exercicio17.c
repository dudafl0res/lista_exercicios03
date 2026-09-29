#include <stdio.h>

int main() {
    float valor, perc, desconto, final;

    printf("Valor da compra: ");
    scanf("%f", &valor);

    if (valor <= 100) {
        perc = 0;
    } else if (valor <= 500) {
        perc = 5;
    } else {
        perc = 10;
    }

    desconto = valor * perc / 100;
    final = valor - desconto;

    printf("Valor original: R$ %.2f\n", valor);
    printf("Desconto: %.0f%%\n", perc);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", final);

    return 0;
}
