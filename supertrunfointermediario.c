#include <stdio.h>

int main (){
    //Estrutura da Carta 1
    char estado1; //Uma letra de A a H, represntando o nome do estado
    char codigo_carta1 [4]; //Código da carta, a letra do estado seguida de um número de 01 a 04
    char nome_cidade1 [30]; //nome da cidade
    int populacao1; //número de habitantes da cidade
    float area_cidade1; //área da cidade em km²
    float PIB1; //Produto Interno Bruto da cidade
    int pontos_turisticos1; //número de pontos turísticos na cidade
    float densidade_populacional1; //número de habitantes (população) dividido pela área da cidade
    float PIB_per_capita1; //PIB da cidade dividido pela número de habitantes (população)

    //Estrutura da Carta 2
    char estado2; //Uma letra de A a H, representando o nome do estado
    char codigo_carta2 [4]; //Código da carta, a letra do estado seguida de um número de 01 a 04
    char nome_cidade2 [30]; //nome da cidade
    int populacao2; //número de habitantes da cidade
    float area_cidade2; //área da cidade em km²
    float PIB2; //Produto Interno Bruto da cidade
    int pontos_turisticos2; //número de pontos turísticos na cidade
    float densidade_populacional2; //número de habitantes (população) dividido pela área da cidade
    float PIB_per_capita2; //PIB da cidade dividido pela número de habitantes (população)

    //Entrada de dados da carta 1
    printf("Cadastro carta 1, jogo Super Trunfo\n");

    printf("Digite o estado (uma letra de A a H): ");
    scanf("%c", &estado1);

    printf("Digite o código do estado (um número de 01 a 04): ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area_cidade1);

    printf("Digite o número do PIB - Produto Interno Bruto: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Entrada de dados da carta 2
    printf("\nCadastro carta 2, jogo Super Trunfo\n");

    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código do estado (um número de 01 a 04): ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area_cidade2);

    printf("Digite o número do PIB - Produto Interno Bruto: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Mostrando dados da carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c %s\n", estado1, codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area_cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos1);
    densidade_populacional1 = (float)(populacao1 / area_cidade1);
    printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    PIB_per_capita1 = (float)(PIB1 / populacao1);
    printf ("PIB per capita : %.2f reais\n", PIB_per_capita1);

    //Mostrando dados da carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c %s\n", estado2, codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area_cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    densidade_populacional2 = (float)(populacao2 / area_cidade2);
    printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    PIB_per_capita2 = (float)(PIB2 / populacao2);
    printf ("PIB per capita : %.2f reais\n", PIB_per_capita2);

    return 0;
}