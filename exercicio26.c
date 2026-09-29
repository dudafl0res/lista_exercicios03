#include <stdio.h>

int main() {
    int qtd, i;
    float nota, soma = 0, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / qtd;

    printf("Media da turma: %.2f\n", media);

    return 0;
}
