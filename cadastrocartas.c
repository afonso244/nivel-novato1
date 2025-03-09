#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro da primeira carta
    printf("\n--- Cadastro da Primeira Cidade ---\n");
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira cidade (Ex: A01): ");
    scanf("%3s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %c", nome1);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da segunda carta
    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Digite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda cidade (Ex: B02): ");
    scanf("%3s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %c", nome2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
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
    
    printf("\n----------------------------\n");
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    
    printf("\n============================\n");
    return 0;
}

