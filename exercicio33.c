#include <stdio.h>

int main() {
    int voto, c1 = 0, c2 = 0, c3 = 0, total;

    printf("Vote em 1, 2 ou 3 (0 para encerrar)\n");

    do {
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto == 1) {
            c1++;
        } else if (voto == 2) {
            c2++;
        } else if (voto == 3) {
            c3++;
        } else if (voto != 0) {
            printf("Voto invalido\n");
        }
    } while (voto != 0);

    total = c1 + c2 + c3;

    printf("Candidato 1: %d votos\n", c1);
    printf("Candidato 2: %d votos\n", c2);
    printf("Candidato 3: %d votos\n", c3);
    printf("Total de votos: %d\n", total);

    if (c1 > c2 && c1 > c3) {
        printf("Vencedor: Candidato 1\n");
    } else if (c2 > c1 && c2 > c3) {
        printf("Vencedor: Candidato 2\n");
    } else if (c3 > c1 && c3 > c2) {
        printf("Vencedor: Candidato 3\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}
