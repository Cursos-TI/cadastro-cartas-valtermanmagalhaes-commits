#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char CodigoDaCarta1[4], CodigoDaCarta2[4];
    char NomeDaCidade1[30], NomeDaCidade2[30];
    int NumeroDePontosTuristicos1, NumeroDePontosTuristicos2;
    float Area1, Area2, PIB1, PIB2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBpCapita1, PIBpCapita2;

    // --- Desafio Mestre ---
    unsigned long int Populacao1, Populacao2;
    float SuperPoder1, SuperPoder2;

    // --- Carta 1 ---
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Uma letra entre A a H representando um dos 8 estados: ");
    scanf(" %c", &Estado1);

    printf("Letra do Estado seguida de um numero entre 01 a 04: ");
    scanf("%3s", CodigoDaCarta1);

    printf("Qual o nome da cidade? ");
    scanf("%29s", NomeDaCidade1);

    // --- Ajuste para o Desafio Mestre ---
    printf("Numero de habitantes: ");
    scanf("%lu", &Populacao1);

    printf("Area em km²: ");
    scanf("%f", &Area1);

    printf("PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &NumeroDePontosTuristicos1);

    // --- Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Uma letra entre A a H representando um dos 8 estados: ");
    scanf(" %c", &Estado2);

    printf("Letra do Estado seguida de um numero entre 01 a 04: ");
    scanf("%3s", CodigoDaCarta2);

    printf("Qual o nome da cidade? ");
    scanf("%29s", NomeDaCidade2);

    // --- Ajuste para o Desafio Mestre ---
    printf("Numero de habitantes: ");
    scanf("%lu", &Populacao2);

    printf("Area em km²: ");
    scanf("%f", &Area2);

    printf("PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &NumeroDePontosTuristicos2);

    DensidadePopulacional1 = Populacao1 / Area1;
    DensidadePopulacional2 = Populacao2 / Area2;
    PIBpCapita1 = PIB1 / Populacao1;
    PIBpCapita2 = PIB2 / Populacao2;

    // --- Desafio Mestre ---
    SuperPoder1 = Populacao1 + Area1 + PIB1 + NumeroDePontosTuristicos1 + PIBpCapita1 + (1 / DensidadePopulacional1);
    SuperPoder2 = Populacao2 + Area2 + PIB2 + NumeroDePontosTuristicos2 + PIBpCapita2 + (1 / DensidadePopulacional2);

    // --- Exibição ---
    printf("\n=============================\n");
    printf("=== CARTA 1 ===\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", CodigoDaCarta1);
    printf("Cidade: %s\n", NomeDaCidade1);

    // --- Ajuste para o Desafio Mestre ---
    printf("Populacao: %lu habitantes\n", Populacao1);

    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos turisticos: %d\n", NumeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBpCapita1);

    // --- Ajuste para o Desafio Mestre ---
    printf("SuperPoder: %.2f\n", SuperPoder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", CodigoDaCarta2);
    printf("Cidade: %s\n", NomeDaCidade2);

    // --- Ajuste para o Desafio Mestre ---
    printf("Populacao: %lu habitantes\n", Populacao2);

    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos turisticos: %d\n", NumeroDePontosTuristicos2);
     printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
     printf("PIB per Capita: %.2f reais\n", PIBpCapita2);

    // --- Desafio Mestre ---
    printf("SuperPoder: %.2f\n", SuperPoder2);
    
    printf("\n===== Comparacao das cartas =====\n");
    printf("Populacao: Carta 1 venceu %lu\n", Populacao1 > Populacao2);
    printf("Area: Carta 1 venceu %d\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu %d\n", PIB1 > PIB2);
    printf("Ponto Turistico: Carta 1 venceu %d\n", NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu %d\n",PIBpCapita1 > PIBpCapita2);
    printf("Super Poder: Carta 1 venceu %d\n", SuperPoder1 > SuperPoder2);

    printf("=============================\n");

    return 0;
}
