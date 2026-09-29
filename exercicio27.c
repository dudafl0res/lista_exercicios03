#include <stdio.h>

int main() {
    int i, aprovados = 0, reprovados = 0;
    float nota, perc;

    for (i = 1; i <= 10; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    perc = aprovados * 100.0 / 10;

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.1f%%\n", perc);

    return 0;
}
