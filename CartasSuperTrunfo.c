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

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c \n", estado_letra1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos1);

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

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado_letra2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    printf("Segunda carta cadastrada! \n");

    return 0;
}
