#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char carta1 = 'A';
    char numCarta1 = '1';
    char nomeCidade1[20] = "São Paulo";
    int pop1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    char carta2 = 'B';
    char numCarta2 = '2';
    char nomeCidade2[20] = "Rio de Janeiro";
    int pop2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

      // Área para entrada de dados

  // Área para exibição dos dados da cidade
    printf("Os dados da carta 1 são:\n");
    printf("Estado: %c \n", carta1);
    printf("Código: %c%c\n", carta1, numCarta1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", pop1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos túristicos: %d \n\n", pontosTuristicos1);
    
    printf("Os dados da carta 2 são:\n");
    printf("Estado: %c \n", carta2);
    printf("Código: %c%c\n", carta2, numCarta2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", pop2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos túristicos: %d \n", pontosTuristicos2);

return 0;
} 
