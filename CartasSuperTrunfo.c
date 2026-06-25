#include <stdio.h>
#include <locale.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

void main() {
  setlocale(LC_CTYPE, "Portuguese");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis para carta 1

  char estadoA;
  char codigo1[20];
  char cidade1[30];
  int populacao1, quantidade_pontos_turisticos1;
  float area1, pib1;

  // Variáveis para carta 2

  char estadoB;
  char codigo2[20];
  char cidade2[30];
  int populacao2, quantidade_pontos_turisticos2;
  float area2, pib2;


  // Área para entrada de dados da Carta 1

  printf("== Carta 1 ==");
  printf("\nEstado: ");
  scanf(" %c", &estadoA);

  printf("Código: ");
  scanf("%s", codigo1);

  scanf("%*c");

  printf("Nome da Cidade: ");
  fgets(cidade1, sizeof(cidade1), stdin);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &quantidade_pontos_turisticos1);

  // Área para entrada de dados da Carta 2

  printf("\n\n== Carta 2 ==");
  printf("\nEstado: ");
  scanf(" %c", &estadoB);

  printf("Código: ");
  scanf("%s", codigo2);

  scanf("%*c");

  printf("Nome da Cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &quantidade_pontos_turisticos2);


  // Área para exibição dos dados da cidade

  printf("\n\nCarta 1\n");
  printf("Estado: %c", estadoA);
  printf("\nCódigo: %s", codigo1);
  printf("\nNome da Cidade: %s", cidade1);
  printf("População: %d", populacao1);
  printf("\nÁrea: %.2f km²", area1);
  printf("\nPIB: %.2f Bilhões de Reais", pib1);
  printf("\nNúmero de Pontos Turísticos: %d", quantidade_pontos_turisticos1);
  printf("\n\n");

  printf("\n\nCarta 2\n");
  printf("Estado: %c", estadoB);
  printf("\nCódigo: %s", codigo2);
  printf("\nNome da Cidade: %s", cidade2);
  printf("População: %d", populacao2);
  printf("\nÁrea: %.2f km²", area2);
  printf("\nPIB: %.2f Bilhões de Reais", pib2);
  printf("\nNúmero de Pontos Turísticos: %d", quantidade_pontos_turisticos2);
  printf("\n\n");

} 
