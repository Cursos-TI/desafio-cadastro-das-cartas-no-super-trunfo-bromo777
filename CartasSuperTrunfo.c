#include <stdio.h>
#include <string.h>

int main()
{
    char estado[3];
    char codigoDaCarta[5];
    char cidade[30];
    int pontosTuristicos;
    float area, pib;
    unsigned long int populacao;

    char estado2[3];
    char codigoDaCarta2[5];
    char cidade2[30];
    int pontosTuristicos2;
    float area2, pib2;
    unsigned long int populacao2;

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPIBPerCapita;
    int resultadoSuperPoder;

    int atributo1, atributo2;

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

    float densidade = (float)populacao / area;
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita = (float)pib / populacao;
    float pibPerCapita2 = (float)pib2 / populacao2;

    float superPoder = (float)populacao + area + pib + pontosTuristicos + pibPerCapita + densidade;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidade2;

    resultadoPopulacao = populacao > populacao2;
    resultadoArea = area > area2;
    resultadoPIB = pib > pib2;
    resultadoPontosTuristicos = pontosTuristicos > pontosTuristicos2;
    resultadoDensidadePopulacional = densidade < densidade2;
    resultadoPIBPerCapita = pibPerCapita > pibPerCapita2;
    resultadoSuperPoder = superPoder > superPoder2;

    char milhaoOuBilhao[30];
    char milhaoOuBilhao2[30];

    char buffer1[50];
    char buffer2[50];

    sprintf(buffer1, "%f", pib);
    int comprimento1 = strlen(buffer1);

    sprintf(buffer2, "%f", pib2);
    int comprimento2 = strlen(buffer2);

    if (comprimento1 > 10) {
        strcpy(milhaoOuBilhao, "bilhões");
    } else {
        strcpy(milhaoOuBilhao, "milhões");
    }

    if (comprimento2 > 10) {
        strcpy(milhaoOuBilhao2, "bilhões");
    } else {
        strcpy(milhaoOuBilhao2, "milhões");
    }

    printf("\n\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f %s de reais\n", pib, milhaoOuBilhao);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f %s de reais\n", pib2, milhaoOuBilhao2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n\nComparação de Cartas: \n");
    printf("\nPopulação: Carta 1 venceu (%d)", resultadoPopulacao);
    printf("\nÁrea: Carta 1 venceu (%d)", resultadoArea);
    printf("\nPIB: Carta 1 venceu (%d)", resultadoPIB);
    printf("\nPontos Turísticos: Carta 1 venceu (%d)", resultadoPontosTuristicos);
    printf("\nDensidade Populacional: Carta 2 venceu (%d)", resultadoDensidadePopulacional);
    printf("\nPIB per Capita: Carta 1 venceu (%d)", resultadoPIBPerCapita);
    printf("\nSuper Poder: Carta 1 venceu (%d)", resultadoSuperPoder);

    printf("\n\nQual atributo você gostaria de utilizar para comparar as cartas?");
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n3. PIB");
    printf("\n4. Número de pontos turísticos");
    printf("\n5. Densidade demográfica\n");
    scanf("%d", &atributo1);

    float resultado1De1; // Armazena na variavel o valor do atributo escolhido pelo usuário, para ser utilizado na soma final da comparação dos dois atributos.
    float resultado1De2; // Armazena o valor do atributo da segunda carta.
    char nomeDoAtributo1[30]; //Armazena o nome do atributo escolhido para utilizar no menu final.

    if (atributo1 == 1) {
    strcpy(nomeDoAtributo1, "Populacao");
} else if (atributo1 == 2) {
    strcpy(nomeDoAtributo1, "Área");
} else if (atributo1 == 3) {
    strcpy(nomeDoAtributo1, "PIB");
} else if (atributo1 == 4) {
    strcpy(nomeDoAtributo1, "Número de pontos turísticos");
} else if (atributo1 == 5) {
    strcpy(nomeDoAtributo1, "Densidade demográfica");
}
    

    //armazena o atributo escolhido pelo usuário no menu, baseado no valor armazenado em "atributo1"
    if (atributo1 == 1) {
        resultado1De1 = populacao;
    } else if (atributo1 == 2) {
        resultado1De1 = area;
    } else if (atributo1 == 3) {
        resultado1De1 = pib;
    } else if (atributo1 == 4) {
        resultado1De1 = pontosTuristicos;
    } else if (atributo1 == 5) {
        resultado1De1 = densidade;
    }

    if (atributo1 == 1) {
        resultado1De2 = populacao2;
    } else if (atributo1 == 2) {
        resultado1De2 = area2;
    } else if (atributo1 == 3) {
        resultado1De2 = pib2;
    } else if (atributo1 == 4) {
        resultado1De2 = pontosTuristicos2;
    } else if (atributo1 == 5) {
        resultado1De2 = densidade2;
    }

    switch (atributo1)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("\n\n Comparação de Cartas (Atributo: População):");
            printf("\nCarta 1 - %s (%s): %d", cidade, estado, populacao);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, populacao2);
            printf("\nCarta 1 (%s) venceu!", cidade);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: População");
            printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, populacao, cidade2, populacao2);
            printf("\nCarta vencedora: %s", cidade);
        }
        else if (populacao2 > populacao)
        {
            printf("\n Comparação de Cartas (Atributo: População):");
            printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, populacao);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, populacao2);
            printf("\nCarta 2 (%s) venceu!", cidade2);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: População");
            printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, populacao, cidade2, populacao2);
            printf("\nCarta vencedora: %s", cidade2);
        }
        else
        {
            printf("\nEmpate!");
        };
        break;
    case 2:
        if (area > area2)
        {
            printf("\n\n Comparação de Cartas (Atributo: Área):");
            printf("\nCarta 1 - %s (%s): %d", cidade, estado, area);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, area2);
            printf("\nCarta 1 (%s) venceu!", cidade);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: Área");
            printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, area, cidade2, area2);
            printf("\nCarta vencedora: %s", cidade);
        }
        else if (area2 > area)
        {
            printf("\n Comparação de Cartas (Atributo: Área):");
            printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, area);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, area2);
            printf("\nCarta 2 (%s) venceu!", cidade2);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: Área");
            printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, area, cidade2, area2);
            printf("\nCarta vencedora: %s", cidade2);
        }
        else
        {
            printf("Empate!");
        };
        break;
    case 3:
        if (pib > pib2)
        {
            printf("\n\n Comparação de Cartas (Atributo: PIB):");
            printf("\nCarta 1 - %s (%s): %d", cidade, estado, pib);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pib2);
            printf("\nCarta 1 (%s) venceu!", cidade);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: PIB");
            printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, pib, cidade2, pib2);
            printf("\nCarta vencedora: %s", cidade);
        }
        else if (pib2 > pib)
        {
            printf("\n Comparação de Cartas (Atributo: PIB):");
            printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, pib);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pib2);
            printf("\nCarta 2 (%s) venceu!", cidade2);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: PIB");
            printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, pib, cidade2, pib2);
            printf("\nCarta vencedora: %s", cidade2);
        }
        else
        {
            printf("\nEmpate!");
        };
        break;
    case 4:
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("\n\n Comparação de Cartas (Atributo: Pontos Turísticos):");
            printf("\nCarta 1 - %s (%s): %d", cidade, estado, pontosTuristicos);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pontosTuristicos2);
            printf("\nCarta 1 (%s) venceu!", cidade);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: Pontos Turísticos");
            printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, pontosTuristicos, cidade2, pontosTuristicos2);
            printf("\nCarta vencedora: %s", cidade);
        }
        else if (pontosTuristicos2 > pontosTuristicos)
        {
            printf("\n Comparação de Cartas (Atributo: Pontos Turísticos):");
            printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, pontosTuristicos);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pontosTuristicos2);
            printf("\nCarta 2 (%s) venceu!", cidade2);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: Pontos Turísticos");
            printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, pontosTuristicos, cidade2, pontosTuristicos2);
            printf("\nCarta vencedora: %s", cidade2);
        }
        else
        {
            printf("\nEmpate!");
        };
        break;
    case 5:
        if (densidade < densidade2)
        {
            printf("\n\n Comparação de Cartas (Atributo: Densidade demográfica):");
            printf("\nCarta 1 - %s (%s): %d", cidade, estado, densidade);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, densidade2);
            printf("\nCarta 1 (%s) venceu!", cidade);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: Densidade Demográfica");
            printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, densidade, cidade2, densidade2);
            printf("\nCarta vencedora: %s", cidade);
        }
        else if (densidade2 < densidade)
        {
            printf("\n Comparação de Cartas (Atributo: Densidade demográfica):");
            printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, densidade);
            printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, densidade2);
            printf("\nCarta 2 (%s) venceu!", cidade2);
            printf("\n\nResultado da comparação: ");
            printf("\nNome das cidades: %s e %s", cidade, cidade2);
            printf("\nAtributo usado na comparação: Densidade Demográfica");
            printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, densidade, cidade2, densidade2);
            printf("\nCarta vencedora: %s", cidade2);
        }
        else
        {
            printf("\nEmpate!");
        };
        break;
    default:
        printf("Opção invalida.");
        break;
    }

    
    // cria um menu interativo para o atributo 2, que remove a opção que foi escolhida no menu do atributo 1.
    if (atributo1 == 1)
    {
        printf("\n\nAgora, escolha mais um atributo para fazer a comparação das cartas: ");
    printf("\n2. Área");
    printf("\n3. PIB");
    printf("\n4. Número de pontos turísticos");
    printf("\n5. Densidade demográfica\n");
    scanf("%d", &atributo2);
    } else if (atributo1 == 2) {
printf("\n\nAgora, escolha mais um atributo para fazer a comparação das cartas: ");
    printf("\n1. População");
    printf("\n3. PIB");
    printf("\n4. Número de pontos turísticos");
    printf("\n5. Densidade demográfica\n");
    scanf("%d", &atributo2);
    } else if ( atributo1 == 3) {
        printf("\n\nAgora, escolha mais um atributo para fazer a comparação das cartas: ");
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n4. Número de pontos turísticos");
    printf("\n5. Densidade demográfica\n");
    scanf("%d", &atributo2);
    } else if (atributo1 == 4) {
        printf("\n\nAgora, escolha mais um atributo para fazer a comparação das cartas: ");
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n3. PIB");
   printf("\n5. Densidade demográfica\n");
    scanf("%d", &atributo2);
    } else if (atributo1 == 5) {
        printf("\n\nAgora, escolha mais um atributo para fazer a comparação das cartas: ");
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n3. PIB");
    printf("\n4. Número de pontos turísticos");
    scanf("%d", &atributo2);
    }

    float resultado2de1; // Armazena na variavel o valor do atributo escolhido pelo usuário, para ser utilizado na soma final da comparação dos dois atributos.
    float resultado2de2; // Armazena o valor do atributo da segunda carta.
    char nomeDoAtributo2[50]; //Armazena o nome do atributo escolhido para utilizar no menu final.

    if (atributo2 == 1) {
    strcpy(nomeDoAtributo2, "População");
} else if (atributo2 == 2) {
    strcpy(nomeDoAtributo2, "Área");
} else if (atributo2 == 3) {
    strcpy(nomeDoAtributo2, "PIB");
} else if (atributo2 == 4) {
    strcpy(nomeDoAtributo2, "Número de pontos turísticos");
} else if (atributo2 == 5) {
    strcpy(nomeDoAtributo2, "Densidade demográfica");
}

    //armazena o atributo escolhido pelo usuário no menu, baseado no valor armazenado em "atributo1"
    if (atributo2 == 1) {
        resultado2de1 = populacao;
    } else if (atributo2 == 2) {
        resultado2de1 = area;
    } else if (atributo2 == 3) {
        resultado2de1 = pib;
    } else if (atributo2 == 4) {
        resultado2de1 = pontosTuristicos;
    } else if (atributo2 == 5) {
        resultado2de1 = densidade;
    }

    if (atributo2 == 1) {
        resultado2de2 = populacao2;
    } else if (atributo2 == 2) {
        resultado2de2 = area2;
    } else if (atributo2 == 3) {
        resultado2de2 = pib2;
    } else if (atributo2 == 4) {
        resultado2de2 = pontosTuristicos2;
    } else if (atributo2 == 5) {
        resultado2de2 = densidade2;
    }
    
        switch (atributo2)
        {
        case 1:
            if (populacao > populacao2)
            {
                printf("\n\n Comparação de Cartas (Atributo: População):");
                printf("\nCarta 1 - %s (%s): %d", cidade, estado, populacao);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, populacao2);
                printf("\nCarta 1 (%s) venceu!", cidade);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: População");
                printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, populacao, cidade2, populacao2);
                printf("\nCarta vencedora: %s", cidade);
            }
            else if (populacao2 > populacao)
            {
                printf("\n Comparação de Cartas (Atributo: População):");
                printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, populacao);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, populacao2);
                printf("\nCarta 2 (%s) venceu!", cidade2);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: População");
                printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, populacao, cidade2, populacao2);
                printf("\nCarta vencedora: %s", cidade2);
            }
            else
            {
                printf("\nEmpate!");
            };
            break;
        case 2:
            if (area > area2)
            {
                printf("\n\n Comparação de Cartas (Atributo: Área):");
                printf("\nCarta 1 - %s (%s): %d", cidade, estado, area);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, area2);
                printf("\nCarta 1 (%s) venceu!", cidade);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: Área");
                printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, area, cidade2, area2);
                printf("\nCarta vencedora: %s", cidade);
            }
            else if (area2 > area)
            {
                printf("\n Comparação de Cartas (Atributo: Área):");
                printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, area);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, area2);
                printf("\nCarta 2 (%s) venceu!", cidade2);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: Área");
                printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, area, cidade2, area2);
                printf("\nCarta vencedora: %s", cidade2);
            }
            else
            {
                printf("Empate!");
            };
            break;
        case 3:
            if (pib > pib2)
            {
                printf("\n\n Comparação de Cartas (Atributo: PIB):");
                printf("\nCarta 1 - %s (%s): %d", cidade, estado, pib);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pib2);
                printf("\nCarta 1 (%s) venceu!", cidade);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: PIB");
                printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, pib, cidade2, pib2);
                printf("\nCarta vencedora: %s", cidade);
            }
            else if (pib2 > pib)
            {
                printf("\n Comparação de Cartas (Atributo: PIB):");
                printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, pib);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pib2);
                printf("\nCarta 2 (%s) venceu!", cidade2);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: PIB");
                printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, pib, cidade2, pib2);
                printf("\nCarta vencedora: %s", cidade2);
            }
            else
            {
                printf("\nEmpate!");
            };
            break;
        case 4:
            if (pontosTuristicos > pontosTuristicos2)
            {
                printf("\n\n Comparação de Cartas (Atributo: Pontos Turísticos):");
                printf("\nCarta 1 - %s (%s): %d", cidade, estado, pontosTuristicos);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pontosTuristicos2);
                printf("\nCarta 1 (%s) venceu!", cidade);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: Pontos Turísticos");
                printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, pontosTuristicos, cidade2, pontosTuristicos2);
                printf("\nCarta vencedora: %s", cidade);
            }
            else if (pontosTuristicos2 > pontosTuristicos)
            {
                printf("\n Comparação de Cartas (Atributo: Pontos Turísticos):");
                printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, pontosTuristicos);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, pontosTuristicos2);
                printf("\nCarta 2 (%s) venceu!", cidade2);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: Pontos Turísticos");
                printf("\nValores do atributo de cada carta: (%s - %d) (%s - %d)", cidade, pontosTuristicos, cidade2, pontosTuristicos2);
                printf("\nCarta vencedora: %s", cidade2);
            }
            else
            {
                printf("\nEmpate!");
            };
            break;
        case 5:
            if (densidade < densidade2)
            {
                printf("\n\n Comparação de Cartas (Atributo: Densidade demográfica):");
                printf("\nCarta 1 - %s (%s): %d", cidade, estado, densidade);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, densidade2);
                printf("\nCarta 1 (%s) venceu!", cidade);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: Densidade Demográfica");
                printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, densidade, cidade2, densidade2);
                printf("\nCarta vencedora: %s", cidade);
            }
            else if (densidade2 < densidade)
            {
                printf("\n Comparação de Cartas (Atributo: Densidade demográfica):");
                printf("\n\nCarta 1 - %s (%s): %d", cidade, estado, densidade);
                printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, densidade2);
                printf("\nCarta 2 (%s) venceu!", cidade2);
                printf("\n\nResultado da comparação: ");
                printf("\nNome das cidades: %s e %s", cidade, cidade2);
                printf("\nAtributo usado na comparação: Densidade Demográfica");
                printf("\nValores do atributo de cada carta: (%s - %f) (%s - %f)", cidade, densidade, cidade2, densidade2);
                printf("\nCarta vencedora: %s", cidade2);
            }
            else
            {
                printf("\nEmpate!");
            };
            break;
        default:
            printf("Opção invalida.");
            break;
        }
    
    //soma o valor final dos dois atributos de cada carta, para a ultima comparação.
    float resultadoFinal1 = resultado1De1 + resultado2de1;
    float resultadoFinal2 = resultado1De2 + resultado2de2;

    //comparação final dos 2 valores de atributo de cada carta.
    printf("\n\nComparação das Cartas: \n");
    printf("\nNome das cidades: %s e %s", cidade, cidade2);
    printf("\nOs atributos usados na comparação: %s e %s", nomeDoAtributo1, nomeDoAtributo2);
    printf("\nOs valores de cada atributo para cada carta: (Carta 1 - %.2f e %.2f) (Carta 2 - %.2f e %.2f)", resultado1De1, resultado2de1, resultado1De2, resultado2de2);
    printf("\nA soma dos atributos para cada carta: (Carta 1 - %.2f) (Carta 2 - %.2f)", resultadoFinal1, resultadoFinal2);
    printf("\nQual carta venceu: ");
    if (resultadoFinal1 > resultadoFinal2) {
        printf ("Carta 1");
    } else if (resultadoFinal2 > resultadoFinal1) {
        printf("Carta 2");
    } else if (resultadoFinal1 == resultadoFinal2) {
        printf("Empate");
    }


    return 0;
}