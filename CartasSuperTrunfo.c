#include <stdio.h>
#include <string.h> // Adicionada para o nome do jogador

int main () {
    char playername[20];
    unsigned int TotaldePontos[2]; // Reservado para uso futuro

    // Apresentação do jogo - SplashScreen
    printf ("Bem vindo ao Super Trunfo Cidades!\n");
    printf ("Primeiro vamos cadastrar suas cartas!\n\n");
     
    // Nome do jogador
    printf("Qual o seu nome? \n");
    fgets(playername, 20, stdin);
    playername[strcspn(playername, "\n")] = 0; 
    printf("\n*** Bem-vindo, %s! Vamos nos divertir! ***\n\n", playername);
    
    // Definição das variáveis
    char estado1, estado2;
    char carta1[5], carta2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidadePop1, densidadePop2;
    float pibPerCapta1, pibPerCapta2;
    int pontosTuristicos1, pontosTuristicos2;
    float superPoder1, superPoder2;

    // ENTRADA DE DADOS - CARTA 1
    printf ("--- CARTA 1 ---\n");
    printf ("Digite o Estado (A até H): ");
    scanf (" %c", &estado1);
    printf ("Digite o Código (ex: A01): ");
    scanf ("%s", carta1);
    printf ("Digite o nome da Cidade: ");
    scanf ("%s", cidade1);
    printf ("População: ");
    scanf ("%d", &populacao1);
    printf ("Área (km²): ");
    scanf ("%f", &area1);
    printf ("PIB (em bilhões): ");
    scanf ("%f", &pib1);
    printf ("Pontos Turísticos: ");
    scanf ("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidadePop1 = (float)populacao1 / area1;
    pibPerCapta1 = (pib1 * 1000000000) / (float)populacao1;
    // O Super Poder soma todas as propriedades (Densidade entra subtraindo por ser melhor quanto menor)
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapta1 + (1.0 / densidadePop1);

    // ENTRADA DE DADOS - CARTA 2
    printf ("\nVamos cadastrar os dados da Carta 2:\n");
    printf ("--- CARTA 2 ---\n");
    printf ("Digite o Estado (A até H): ");
    scanf (" %c", &estado2);
    printf ("Digite o Código (ex: B02): ");
    scanf ("%s", carta2);
    printf ("Digite o nome da Cidade: ");
    scanf ("%s", cidade2);
    printf ("População: ");
    scanf ("%d", &populacao2);
    printf ("Área (km²): ");
    scanf ("%f", &area2);
    printf ("PIB (em bilhões): ");
    scanf ("%f", &pib2);
    printf ("Pontos Turísticos: ");
    scanf ("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidadePop2 = (float)populacao2 / area2;
    pibPerCapta2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapta2 + (1.0 / densidadePop2);

    // EXIBIÇÃO CARTA 1
    printf("\n==========================\n");
    printf ("DADOS DA CARTA 1\n");
    printf ("Estado: %c - Código: %s\n", estado1, carta1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões\n", pib1);
    printf ("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf ("PIB per Capita: %.2f reais\n", pibPerCapta1);
    printf("~~~~~~~~~~~~~~~~~~~~~~~\nSuper Poder: %.2f\n~~~~~~~~~~~~~~~~~~~~~~~\n", superPoder1);

    // EXIBIÇÃO CARTA 2
    printf("\n==========================\n");
    printf ("DADOS DA CARTA 2\n");
    printf ("Estado: %c - Código: %s\n", estado2, carta2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões\n", pib2);
    printf ("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf ("PIB per Capita: %.2f reais\n", pibPerCapta2);
    printf("~~~~~~~~~~~~~~~~~~~~~~~\nSuper Poder: %.2f\n~~~~~~~~~~~~~~~~~~~~~~~\n", superPoder2);

    // Área de Comparação das Cartas
    printf("\n*** HORA DO DUELO: QUEM VENCE? ***\n");

    if (superPoder1 > superPoder2) {
        printf("Resultado: A Carta 1 (%s) é a VENCEDORA!\n", cidade1);
    } 
    else if (superPoder2 > superPoder1) {
        printf("Resultado: A Carta 2 (%s) é a VENCEDORA!\n", cidade2);
    } 
    else {
        printf("Resultado: EMPATE! Ambas as cartas têm o mesmo poder.\n");
    }

    printf("**********************************\n");

    return 0;
}