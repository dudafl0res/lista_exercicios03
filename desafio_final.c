#include <stdio.h>

int main() {
    int codigo, qtd, itens = 0;
    float preco, total = 0, desconto, pagar, pago;

    do {
        printf("\n--- CARDAPIO ---\n");
        printf("1 - X-Burguer    R$ 18.00\n");
        printf("2 - X-Salada     R$ 20.00\n");
        printf("3 - Batata frita R$ 12.00\n");
        printf("4 - Refrigerante R$ 6.00\n");
        printf("5 - Suco         R$ 8.00\n");
        printf("0 - Finalizar\n");
        printf("Codigo: ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1: preco = 18; break;
            case 2: preco = 20; break;
            case 3: preco = 12; break;
            case 4: preco = 6; break;
            case 5: preco = 8; break;
            default: preco = 0;
        }

        if (preco > 0) {
            printf("Quantidade: ");
            scanf("%d", &qtd);
            total = total + preco * qtd;
            itens = itens + qtd;
            printf("Total ate agora: R$ %.2f\n", total);
        } else if (codigo != 0) {
            printf("Codigo invalido\n");
        }
    } while (codigo != 0);

    if (total >= 50) {
        desconto = total * 0.10;
    } else {
        desconto = 0;
    }
    pagar = total - desconto;

    printf("\nItens: %d\n", itens);
    printf("Total: R$ %.2f\n", total);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor a pagar: R$ %.2f\n", pagar);

    printf("Valor pago: ");
    scanf("%f", &pago);

    if (pago >= pagar) {
        printf("Troco: R$ %.2f\n", pago - pagar);
    } else {
        printf("Valor insuficiente\n");
    }

    return 0;
}
