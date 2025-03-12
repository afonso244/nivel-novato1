#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib_per_capita1, pib_per_capita2;
    float densidade1, densidade2;
    float superpoder1, superpoder2;

    // Cadastro da primeira carta
    printf("\n--- Cadastro da Primeira Cidade ---\n");
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o c\u00f3digo da primeira cidade (Ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);
    printf("Digite a popula\u00e7\u00e3o da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a \u00e1rea da cidade em km\u00b2: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade em bilh\u00f5es: ");
    scanf("%f", &pib1);
    printf("Digite o n\u00famero de pontos tur\u00edsticos: ");
    scanf("%d", &pontos_turisticos1);

    pib_per_capita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);

    // Cadastro da segunda carta
    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Digite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o c\u00f3digo da segunda cidade (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);
    printf("Digite a popula\u00e7\u00e3o da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a \u00e1rea da cidade em km\u00b2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade em bilh\u00f5es: ");
    scanf("%f", &pib2);
    printf("Digite o n\u00famero de pontos tur\u00edsticos: ");
    scanf("%d", &pontos_turisticos2);

    pib_per_capita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição das cartas cadastradas
    printf("\n============================\n");
    printf("      COMPARA\u00c7\u00c3O DAS CARTAS     ");
    printf("\n============================\n");

    printf("\nPopula\u00e7\u00e3o: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("\u00c1rea: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Tur\u00edsticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
