#include <stdio.h>

int main() {
    printf("\n--- Super Trunfo - Cadastro das Cartas!---\n");

    char estado_letra1, estado_letra2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float capita1, capita2;
    float poder1, poder2;

    printf("\n--- Cadastrando a carta 1: ---\n"); 
    printf("Informe o Estado de (A-H): \n");
    scanf(" %c", &estado_letra1);

    printf("Informe o código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Informe o nome da Cidade: \n");
    scanf(" %19[^\n]", cidade1);

    printf("Informe a população da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a área da Cidade (km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB da Cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontos1);

    densidade1 = (float)(populacao1 / area1) / 1.0;
   
    capita1 = (float)(pib1 / populacao1);

    poder1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + capita1;

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c \n", estado_letra1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos1);
    printf ("A desnsidade populacional é: %.2f hab/km² \n", densidade1);      
    printf ("O PIB per Capita é: %.2f reais \n", capita1);  
    printf ("O super Poder da Primeira carta é: %.1f\n", poder1);

    printf("Primeira carta cadastrada! \n");

    printf("\n--- Cadastrando a carta 2: ---\n"); 
    printf("Informe o Estado de (A-H): \n");
    scanf(" %c", &estado_letra2);

    printf("Informe o código da carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Informe o nome da Cidade: \n");
    scanf(" %19[^\n]", cidade2);

    printf("Informe a população da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a área da Cidade (km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB da Cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontos2);

    densidade2 = (float)(populacao2 / area2) / 1.0;

    capita2 = (float)(pib2 / populacao2);

    poder2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + capita2;
    
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado_letra2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf ("A desnsidade populacional é: %.2f hab/km² \n", densidade2);      
    printf ("O PIB per Capita é: %.2f reais \n", capita2);
    printf ("O super Poder da Segunda carta é: %.1f\n", poder2);

    printf("Segunda carta cadastrada! \n");

    // Comparação das Cartas
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPonto = pontos1 > pontos2;
    int resultadoDensidade = densidade1 > densidade2;
    int resultadoCapita = capita1 > capita2;
    int resultadoPoder = poder1 > poder2;
    
    printf("\n--- Comparação das Cartas ---\n"); 

    printf ("Populacão: %d\n");
    printf ("Área: %d\n");
    printf ("Pib: %d\n");
    printf ("Pontos Turisticos: %d\n");
    printf ("Densidade Populacional: %d\n");
    printf ("Pib per Capita: %d\n");
    printf ("Super Poder: %d\n");

    return 0;
}
