#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1, pib1;
    int pontostur1;
    
    // Novas variáveis calculadas (Carta 1)
    float densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2, pib2;
    int pontostur2;
    
    // Novas variáveis calculadas (Carta 2)
    float densidade2, pibPerCapita2;

    // * ENTRADA DE DADOS: CARTA 1 *
    printf("Cadastro da Carta 1 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontostur1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para valor real para o cálculo

    // * ENTRADA DE DADOS: CARTA 2 *
    printf("\nCadastro da Carta 2 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontostur2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // * EXIBIÇÃO DOS DADOS *
    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\nCarta 1: \n");
    printf("Estado: %c | Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontostur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2: \n");
    printf("Estado: %c | Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontostur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
