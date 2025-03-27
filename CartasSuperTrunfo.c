#include <stdio.h>

int main() {
    int populacao[2], pontos_turisticos[2];
    float area[2], pib[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite os dados da carta %d:\n", i + 1);
        printf("Populacao: ");
        scanf("%d", &populacao[i]);
        printf("Area: ");
        scanf("%f", &area[i]);
        printf("PIB: ");
        scanf("%f", &pib[i]);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos[i]);
        printf("\n");
    }

    printf("\nDados cadastrados:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Populacao: %d\n", populacao[i]);
        printf("Area: %.2f\n", area[i]);
        printf("PIB: %.2f\n", pib[i]);
        printf("Numero de pontos turisticos: %d\n", pontos_turisticos[i]);
    }

    return 0;
}
