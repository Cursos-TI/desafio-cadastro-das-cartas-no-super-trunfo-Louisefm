#include <stdio.h>

int main() {
    printf("Super Trunfo - Cadastro das Cartas!\n");

    char carta1, carta2;
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("Cadastrando a carta 1: \n");
    printf("Informe o Estado de (A-H): \n");
    scanf("%c", &estado1);

    printf("Informe o código da carta (ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Informe o nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Informe a população da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a área da Cidade (km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB da Cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontos1);

    printf("Primeira carta cadastrada! \n");

    printf("Cadastrando a carta 2: \n");  
    printf("Informe o Estado de (A-H): \n");
    scanf("%d", &estado2);

    printf("Informe o código da carta (ex: A01): \n");
    scanf("%s", &codigo2);
        
    printf("Informe o nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Informe a população da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a área da Cidade (km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB da Cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontos2);
    printf("Segunda carta cadastrada! \n");

    return 0;
}
