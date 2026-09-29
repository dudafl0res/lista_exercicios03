#include <stdio.h>

int main() {
    char produto[50];
    int qtd;
    float preco, total;

    printf("Nome do produto: ");
    scanf(" %[^\n]", produto);
    printf("Quantidade: ");
    scanf("%d", &qtd);
    printf("Preco unitario: ");
    scanf("%f", &preco);

    total = qtd * preco;

    printf("Produto: %s\n", produto);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}
