#include <stdio.h>

int main() {
    // Área para definição das variáveis originais
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    char pontostur1[50], pontostur2[50];

    float densidade1, densidade2;
    float pibperCapita1, pibperCapita2;

    // * CADASTRO DA CARTA 1 *
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
    scanf("%s", pontostur1);

    // Cálculos da Carta 1
    // Densidade = População / Área
    densidade1 = (float)populacao1 / area1;
    // PIB per Capita = (PIB * 1 bilhão) / População
    pibperCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

    // * CADASTRO DA CARTA 2 *
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
    scanf("%s", pontostur2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibperCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // * EXIBIÇÃO DOS DADOS DA CARTA 1 *
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c | Código: %s | Cidade: %s\n", estado1, codigo1, nomecidade1);
    printf("População: %d | Área: %.2f km²\n", populacao1, area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %s\n", pontostur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibperCapita1);

    // * EXIBIÇÃO DOS DADOS DA CARTA 2 *
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c | Código: %s | Cidade: %s\n", estado2, codigo2, nomecidade2);
    printf("População: %d | Área: %.2f km²\n", populacao2, area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %s\n", pontostur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibperCapita2);

    return 0;
}