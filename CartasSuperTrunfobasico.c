#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1, estado2;
char codigo1[4], codigo2[4];
char nomecidade1[50], nomecidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontostur1, pontostur2;

  // Área para entrada de dados
printf ("Cadastro da Carta 1 \n");
printf ("Estado (A-H):");
scanf (" %c", &estado1);
printf ("Código (Ex: A01): ");
scanf (" %s", codigo1);
printf ("Nome da cidade: ");
scanf (" %[^\n]",nomecidade1);
printf ("População: ");
scanf (" %d", &populacao1);
printf ("Área (km²): ");
scanf (" %f", &area1);
printf ("PIB (em bilhões): ");
scanf (" %f", &pib1);
printf ("Pontos Turísticos: ");
scanf (" A%d", &pontostur1);

printf ("Cadastro da Carta 2 \n");
printf ("Estado (A-H):");
scanf (" %c", &estado2);
printf ("Código (Ex: B02): ");
scanf (" %s", codigo2);
printf ("Nome da cidade: ");
scanf (" %[^\n]",nomecidade2);
printf ("População: ");
scanf (" %d", &populacao2);
printf ("Área (km²): ");
scanf (" %f", &area2);
printf ("PIB (em bilhões): ");
scanf (" %f", &pib2);
printf ("Pontos Turísticos: ");
scanf (" %d", &pontostur2);
  // Área para exibição dos dados da cidade
printf ("\nCarta 1: \n");
printf ("Estado: %c\n Código: %s\n Nome da Cidade: %s\n", estado1, codigo1, nomecidade1);
printf ("População: %d\n Área: %.2f km²\n PIB: %.2f bilh0es de reais\n", populacao1, area1, pib1);
printf ("Número de Pontos Turísticos %d\n", pontostur1);

printf ("\nCarta 2: \n");
printf ("Estado: %c\n Código: %s\n Nome da Cidade: %s\n", estado2, codigo2, nomecidade2);
printf ("População: %d\n Área: %.2f km²\n PIB: %.2f bilh0es de reais\n", populacao2, area2, pib2);
printf ("Número de Pontos Turísticos %d\n", pontostur2);
return 0;
} 
