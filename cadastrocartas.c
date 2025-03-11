#include <stdio.h>

int main() {
    char estado1, estado2;
    char  codigo1[50], codigo2[50];
    char nome1[50], nome2[50];
    float populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib_per_capita1, pib_per_capita2;
    float densidade1, densidade2;

    // Cadastro da primeira carta
    printf("\n--- Cadastro da Primeira Cidade ---\n");
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira cidade (Ex: A01): ");
    scanf ("%s" , codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);
    
    printf("Digite a população da cidade: ");
    scanf("%f", &populacao1);

    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    pib_per_capita1 =(float)  pib1 / populacao1;
    densidade1 =(float) populacao1 /area1;


    
    // Cadastro da segunda carta
    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Digite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda cidade (Ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);
    
    printf("Digite a população da cidade: ");
    scanf("%f", &populacao2);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    pib_per_capita2 =(float)  populacao2;
    densidade2 =(float) populacao2 / area2;
    
    // Exibição dos dados cadastrados
    printf("\n============================\n");
    printf("      CARTAS CADASTRADAS     ");
    printf("\n============================\n");
    
    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("pib per capita: %.2f\n", pib_per_capita1);
    printf("densidade: %.2f\n", densidade1);

    printf("\n----------------------------\n");
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("pib per capita: %.2f\n", pib_per_capita2);
    printf("densidade: %.2f\n" , densidade2);
    
    printf("\n============================\n");
    return 0;
}

