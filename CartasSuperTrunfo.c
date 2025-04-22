#include <stdio.h>

int main()
{
    char estado[3];
    char codigoDaCarta[5];
    char cidade[30];
    int populacao, pontosTuristicos;
    float area, pib;

    char estado2[3];
    char codigoDaCarta2[5];
    char cidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    

    printf("\nInsira as informações da primeira carta: ");
    
    printf("\n\nDigite o Estado da primeira carta: ");
    scanf("%s", estado);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigoDaCarta);

    printf("Digite a cidade da primeira carta: ");
    scanf("%s", cidade);

    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao);

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos);

    printf("\nAgora, insira as informações da segunda carta: ");

    printf("\n\nDigite o Estado da segunda carta: ");
    scanf("%s", estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigoDaCarta2);

    printf("Digite a cidade da segunda carta: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    float densidade = (float) populacao / area;
    float densidade2 = (float) populacao2 / area2;

    float pibPerCapita = (float) pib / populacao; 
    float pibPerCapita2 = (float) pib2 / populacao2;

    printf("\n\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f milhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}