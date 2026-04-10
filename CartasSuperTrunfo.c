#include <stdio.h>

int main () {

//Apresentação do jogo - SplashScreen

    printf ("Bem vindo ao Super Trunfo Cidades!\n");
    printf ("Primeiro vamos cadastrar suas cartas!\n\n");
    
// Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;
  char carta1[4],carta2[4];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

// Área para entrada de dados

    printf ("---CARTA 1---\n");
    printf ("Digite o Estado - Letras de A até H: \n");
    scanf (" %c", &estado1);
    printf ("Digite o Código da Carta - Número de 01 a 04: \n");
    scanf ("%s", carta1);
    printf ("Digite o nome da Cidade:\n");
    scanf ("%s", cidade1);
    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacao1);
    printf ("Digite a área da cidade em quilômetros quadrado:\n");
    scanf ("%f", &area1);
    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pib1);
    printf ("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf ("%d", &pontosTuristicos1);

    printf("\nVamos cadastrar os dados da Carta 2:\n");
    printf ("---CARTA 2---\n");
    printf ("Digite o Estado - Letras de A a H: \n");
    scanf (" %c", &estado2);
    printf ("Digite o Código da Carta - Número de 01 a 04: \n");
    scanf ("%s", carta2);
    printf ("Digite o nome da Cidade:\n");
    scanf ("%s", cidade2);
    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacao2);
    printf ("Digite a área da cidade em quilômetros quadrado:\n");
    scanf ("%f", &area2);
    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pib2);
    printf ("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf ("%d", &pontosTuristicos2);

// Área para exibição dos dados da cidade

    printf("\nOs dados da Carta 1 são:\n");
    printf ("\nCARTA 1\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", carta1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    float Densidade1 = populacao1 / area1;
    printf ("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    float PIBpercapita1 = pib1 / populacao1;
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita1);

    printf("\nOs dados da Carta 2 são:\n");
    printf ("\nCARTA 2\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", carta2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    float Densidade2 = populacao2 / area2;
    printf ("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    float PIBpercapita2 = pib2 / populacao2;
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita2);

return 0;

}