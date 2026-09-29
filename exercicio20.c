#include <stdio.h>

int main() {
    float n1, n2;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite a operacao (+ - * /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Resultado: %.2f\n", n1 + n2);
            break;
        case '-':
            printf("Resultado: %.2f\n", n1 - n2);
            break;
        case '*':
            printf("Resultado: %.2f\n", n1 * n2);
            break;
        case '/':
            if (n2 == 0) {
                printf("Nao da para dividir por zero\n");
            } else {
                printf("Resultado: %.2f\n", n1 / n2);
            }
            break;
        default:
            printf("Operacao invalida\n");
    }

    return 0;
}
