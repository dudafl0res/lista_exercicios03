#include <stdio.h>

int main() {
    float horas, valorHora, salario;

    printf("Quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Valor da hora: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    printf("Salario bruto: R$ %.2f\n", salario);

    return 0;
}
