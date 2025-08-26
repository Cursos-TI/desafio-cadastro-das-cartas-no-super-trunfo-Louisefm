#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("\n--- Super Trunfo - Cadastro das Cartas!---\n");

    char estado_letra1, estado_letra2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    int carta1, carta2;
    float densidade1, densidade2;
    float capita1, capita2;
    float inversordensidade1, inversordensidade2;
    float poder1, poder2;
    int opcao;
 
        // Inserindo dados da Carta 1
    printf("\n--- Cadastrando a carta 1: ---\n"); 
    printf("Informe o Estado (Apenas uma letra de A até H): \n");
    scanf("%c", &estado_letra1);

    printf("Informe a letra do Estado com o número de 1 a 4 para gerar o código (Ex. A01): \n");
    scanf("%s", codigo1);

    printf("Informe o nome da Cidade: \n");
    scanf(" %19[^\n]", cidade1);

    printf("Informe a população da Cidade: \n");
    scanf("%ld", &populacao1);

    printf("Informe a área da Cidade (km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB da Cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontos1);

    // Adição do nível Aventureiro
    densidade1 = (float)(populacao1 / area1) / 1.0;   
    capita1 = (float)(pib1 / populacao1);

    // Adição do nível Mestre
    inversordensidade1 = 1 / densidade1;
    poder1 = populacao1 + area1 + pib1 + pontos1 + capita1 + inversordensidade1;

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c \n", estado_letra1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %ld habitantes\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos1);
    // Calcular densidade populacional e PIB per Capita
    printf ("A desnsidade populacional é: %.2f hab/km² \n", densidade1);      
    printf ("O PIB per Capita é: %.2f reais \n", capita1);  
    // Calcular Super Poder
        printf ("O super Poder da Primeira carta é: %.1f\n", poder1);

    printf("Primeira carta cadastrada! \n");

    printf("\n--- Cadastrando a carta 2: ---\n"); 
    printf("Informe o Estado (Apenas uma letra de A até H): \n");
    scanf(" %c", &estado_letra2);

    printf("Informe a letra do Estado com o número de 1 a 4 para gerar o código (Ex. A01): \n");
    scanf("%s", codigo2);

    printf("Informe o nome da Cidade: \n");
    scanf(" %19[^\n]", cidade2);

    printf("Informe a população da Cidade: \n");
    scanf("%ld", &populacao2);

    printf("Informe a área da Cidade (km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB da Cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontos2);

    // Adição do nível Aventureiro
    densidade2 = (float)(populacao2 / area2) / 1.0;   
    capita2 = (float)(pib2 / populacao2);

    // Adição do nível Mestre
    inversordensidade2 = 1 / densidade2;
    poder2 = populacao2 + area2 + pib2 + pontos2 + capita2 + inversordensidade2;
    
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado_letra2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf ("A desnsidade populacional é: %.2f hab/km² \n", densidade2);      
    printf ("O PIB per Capita é: %.2f reais \n", capita2);
    printf ("O super Poder da Segunda carta é: %1.f\n", poder2);

    printf("Segunda carta cadastrada! \n");

    // Nivel Mestre - Comparação das Cartas
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPonto = pontos1 > pontos2;
    int resultadoDensidade = densidade1 > densidade2;
    int resultadoCapita = capita1 > capita2;
    int resultadoPoder = poder1 > poder2;
    
    printf("\n--- Comparação das Cartas ---\n"); 

    printf ("Populacão: %d\n", populacao1 > populacao2);
    printf ("Área: %d\n", area1 > area2);
    printf ("Pib: %d\n", pib1 > pib2);
    printf ("Pontos Turisticos: %d\n", pontos1 > pontos2);
    printf ("Densidade Populacional: %d\n", densidade1 > densidade2);
    printf ("Pib per Capita: %d\n", capita1 > capita2);
    printf ("Super Poder: %d\n", poder1 > poder2);

    printf("Se o valor de cada variável for 1 - A Carta 1 venceu!\n");
    printf("Se o valor da variável for 0 - A Carta 2 venceu!\n");

    // Comparar um atributo escolhido pelo programador – Nivel Novato
    
     printf("\n--- Comparação das Cartas (Atributo Área)  ---\n"); 

     printf("Carta 1: %s\n", cidade1); 
     printf("Área: %.2f km²\n", area1);       
     printf("Carta 2: %s\n", cidade2); 
     printf("Área: %.2f km²\n", area2);

    if (area1 > area2) {
        printf("Resultado: A carta 1 venceu!\n");
    }else {
        printf("Resultado: A carta 2 venceu!\n");
    }
    // Menu interativo Comparação de um atributo – Nivel Aventureiro
    printf("\n--- Menu interativo - Comparação das Cartas ---\n"); 
    
     // Menu inicial
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Determinar o vencedor da rodada com base no atributo escolhido
    switch (opcao) {
        case 1: // População
            if (populacao1 > populacao2) {
                printf("A Carta 1 venceu!\n");
            } else if (populacao1 == populacao2) {
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
        case 2: // Área
            if (area1 > area2) {
                printf("A Carta 1 venceu!\n");
            } else if (area1 == area2) {
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
        case 3: // Pib
            if (pib1 > pib2) {
                printf("A Carta 1 venceu!\n");
            } else if (pib1 == pib2) {
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
        case 4: // Pontos Turísticos
            if (pontos1 > pontos2) {
                printf("A Carta 1 venceu!\n");
            } else if (pontos1 == pontos2) {
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
        case 5: // Densidade Populacional
            if (densidade1 < densidade2) {
                printf("A Carta 1 venceu!\n");
            } else if (densidade1 == densidade2) {
                printf("Houve um empate!\n");
            } else {
                printf("A Carta 2 venceu!\n");
            }
            break;
        default:
            printf("Opção de jogo inválida!\n");
            break;
    }
    // Operador Ternário Comparação de dois atributos - Nível mestre
    int primeiraOpcao, segundaOpcao;
    char *resultado1, *resultado2, *resultado3, *resultado4, *resultado5;
    char *solucao1, *solucao2, *solucao3, *solucao4, *solucao5;

    printf("\n--- Menu interativo - Comparação das Cartas ---\n");

    printf("Escolha a primeira opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &primeiraOpcao);

    switch (primeiraOpcao) {
        case 1:
            printf("Você escolheu População\n");
            resultado1 = (populacao1 > populacao2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
            printf("%s\n", resultado1);
            break;
        case 2:
            printf("Você escolheu Área\n");
            resultado2 = (area1 > area2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
            printf("%s\n", resultado2);
            break;
        case 3:
            printf("Você escolheu Pib\n");
            resultado3 = (pib1 > pib2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
            printf("%s\n", resultado3);
            break;
        case 4:
            printf("Você escolheu Número de Pontos Turísticos\n");
            resultado4 = (pontos1 > pontos2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
            printf("%s\n", resultado4);
            break;
        case 5:
            printf("Você escolheu Densidade Populacional\n");
            resultado5 = (densidade1 < densidade2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
            printf("%s\n", resultado5);
            break;
        default:
            printf("Opção de jogo inválida!\n");
            break;
    }
    printf("\n");
    printf("Escolha a segunda opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &segundaOpcao);

    if (primeiraOpcao == segundaOpcao) {
        printf("Você escolheu a mesma opção!\n");
    } else {
        switch (segundaOpcao) {
            case 1:
                printf("Você escolheu População\n");
                solucao1 = (populacao1 > populacao2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
                printf("%s\n", solucao1);
                break;
            case 2:
                printf("Você escolheu Área\n");
                solucao2 = (area1 > area2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
                 printf("%s\n", solucao2);
                break;
            case 3:
                printf("Você escolheu Pib\n");
                solucao3 = (pib1 > pib2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
                 printf("%s\n", solucao3);
                break;
            case 4:
                printf("Você escolheu Número de Pontos Turísticos\n");
                solucao4 = (pontos1 > pontos2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
                 printf("%s\n", solucao4);
                break;
            case 5:
                printf("Você escolheu Densidade Populacional\n");
                solucao5 = (densidade1 < densidade2) ? "Carta 1 Venceu" : "Carta 2 Venceu";
                 printf("%s\n", solucao5);
                break;
            default:
                printf("Opção de jogo inválida!\n");
                break;
        }
    }     
     // Exibir os Vencedores
        printf("\n");
        printf("Exibindo as Cartas vencedoras!\n");

        printf("População: Carta %d venceu!\n", resultadoPopulacao ? 1 : 2);
        printf("Área: Carta %d venceu!\n", resultadoArea ? 1 : 2);
        printf("Pib: Carta %d venceu!\n", resultadoPib ? 1 : 2);
        printf("Pontos Turísticos: Carta %d venceu!\n", resultadoPonto ? 1 : 2);
        printf("Densidade Populacional: Carta %d venceu!\n", resultadoDensidade ? 1 : 2);

    printf("\n--- Fim do Jogo ---\n");

        return 0;
    } 