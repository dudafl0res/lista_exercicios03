#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000, valor;

    do {
        printf("\n1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Valor do deposito: ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                break;
            case 3:
                printf("Valor do saque: ");
                scanf("%f", &valor);
                if (valor <= saldo) {
                    saldo = saldo - valor;
                } else {
                    printf("Saldo insuficiente\n");
                }
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 4);

    return 0;
}
