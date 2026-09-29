#include <stdio.h>

int main() {
    float km, litros, consumo;

    printf("Distancia percorrida (km): ");
    scanf("%f", &km);
    printf("Combustivel utilizado (litros): ");
    scanf("%f", &litros);

    consumo = km / litros;

    printf("Consumo medio: %.2f km/L\n", consumo);

    return 0;
}
