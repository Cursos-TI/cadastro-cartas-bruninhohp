#include <stdio.h>

int main() {
    // Área para definição das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    char pontostur1[50], pontostur2[50];

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

    // * CADASTRO DA CARTA 2 *
    printf("\nCadastro da Carta 2 \n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // O espaço antes do %c resolve o problema do "atropelo"
    
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

    // * EXIBIÇÃO DOS DADOS DA CARTA 1 *
    printf("\nCarta 1: \n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigo1, nomecidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\n", populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %s\n", pontostur1);

    // * EXIBIÇÃO DOS DADOS DA CARTA 2 *
    printf("\nCarta 2: \n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, nomecidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\n", populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %s\n", pontostur2);

    return 0;
}