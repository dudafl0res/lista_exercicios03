#include <stdio.h>

int main() {
    char nome[50];
    int qtd, i, aprov = 0, recup = 0, reprov = 0;
    float n1, n2, media, soma = 0, maior = 0, menor = 0;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("\nNome: ");
        scanf(" %[^\n]", nome);
        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;
        soma = soma + media;

        if (media >= 7) {
            printf("%s: %.2f - Aprovado\n", nome, media);
            aprov++;
        } else if (media >= 5) {
            printf("%s: %.2f - Recuperacao\n", nome, media);
            recup++;
        } else {
            printf("%s: %.2f - Reprovado\n", nome, media);
            reprov++;
        }

        if (i == 1) { // primeiro aluno
            maior = media;
            menor = media;
        }
        if (media > maior) {
            maior = media;
        }
        if (media < menor) {
            menor = media;
        }
    }

    printf("\nQuantidade de alunos: %d\n", qtd);
    printf("Aprovados: %d\n", aprov);
    printf("Recuperacao: %d\n", recup);
    printf("Reprovados: %d\n", reprov);
    printf("Media geral: %.2f\n", soma / qtd);
    printf("Maior media: %.2f\n", maior);
    printf("Menor media: %.2f\n", menor);

    return 0;
}
