#include <stdio.h>

int main() {
    char produto[50];
    int qtd, vendas = 0, totalProdutos = 0, continuar;
    float preco, totalVenda, faturamento = 0, maior = 0;

    do {
        printf("\nProduto: ");
        scanf(" %[^\n]", produto);
        printf("Quantidade: ");
        scanf("%d", &qtd);
        printf("Preco unitario: ");
        scanf("%f", &preco);

        totalVenda = qtd * preco;
        printf("Total da venda: R$ %.2f\n", totalVenda);

        vendas++;
        totalProdutos = totalProdutos + qtd;
        faturamento = faturamento + totalVenda;

        if (totalVenda > maior) {
            maior = totalVenda;
        }

        printf("Mais uma venda? (1-Sim 0-Nao): ");
        scanf("%d", &continuar);
    } while (continuar == 1);

    printf("\nVendas realizadas: %d\n", vendas);
    printf("Produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f\n", maior);

    return 0;
}
