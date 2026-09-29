#include <stdio.h>

int main() {
    int entrada, saida, horas;
    float valor;

    printf("Hora de entrada: ");
    scanf("%d", &entrada);
    printf("Hora de saida: ");
    scanf("%d", &saida);

    horas = saida - entrada;
    if (horas < 0) { // passou da meia-noite
        horas = horas + 24;
    }

    if (horas <= 1) {
        valor = 10;
    } else {
        valor = 10 + (horas - 1) * 5;
    }

    printf("Tempo: %d hora(s)\n", horas);
    printf("Valor: R$ %.2f\n", valor);

    return 0;
}
