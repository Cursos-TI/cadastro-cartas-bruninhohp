#include <stdio.h>

int main() {
    // * DEFINIÇÃO DAS VARIÁVEIS *
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomecidade1[50], nomecidade2[50];
    
    // Mudança para unsigned long int para suportar populações bilionárias
    unsigned long int populacao1, populacao2; 
    
    float area1, area2;
    float pib1, pib2;
    int pontostur1, pontostur2; // Voltamos para int para poder somar no Super Poder

    float densidade1, densidade2;
    float pibperCapita1, pibperCapita2;
    float superPoder1, superPoder2;

    // * ENTRADA DE DADOS - CARTA 1 *
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontostur1);

    // * CÁLCULOS - CARTA 1 *
    densidade1 = (float)populacao1 / area1;
    pibperCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    
    // Super Poder: Soma de tudo (PIB convertido para valor real + Densidade Invertida)
    // O inverso da densidade é (1 / densidade)
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontostur1 + pibperCapita1 + (1.0f / densidade1);

    // * ENTRADA DE DADOS - CARTA 2 *
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontostur2);

    // * CÁLCULOS - CARTA 2 *
    densidade2 = (float)populacao2 / area2;
    pibperCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontostur2 + pibperCapita2 + (1.0f / densidade2);

    // * COMPARAÇÃO E RESULTADOS *
    // O resultado de uma comparação (A > B) em C é 1 (verdadeiro) ou 0 (falso)
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");
    
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontostur1 > pontostur2);
    
    // Regra especial: Na densidade, o MENOR valor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibperCapita1 > pibperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}