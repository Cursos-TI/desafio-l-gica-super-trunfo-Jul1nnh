#include <stdio.h>

int main() {
    // --- dados das cartas ---
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[] = "A01";
    char codigo2[] = "B02";
    char cidade1[] = "Ribeirao";
    char cidade2[] = "SaoPaulo";
    int NPT1 = 15;
    int NPT2 = 20;
    unsigned long int populacao1 = 6000000;
    unsigned long int populacao2 = 3000000;
    float PIB1 = 40;
    float PIB2 = 50;
    float area1 = 1000;
    float area2 = 5000;
    float power1, power2;
    float DP1, DP2, PIBP1, PIBP2;
    int opcao, opcao2, opcao3;
    float carta1 = 0, carta2 = 0;

    // --- calculos ---
    DP1 = (float)populacao1 / area1;
    PIBP1 = (PIB1 * 1000000.0) / populacao1;
    power1 = (float)populacao1 + NPT1 + PIB1 + area1 + PIBP1 - DP1; 

    DP2 = (float)populacao2 / area2;   
    PIBP2 = (PIB2 * 1000000.0) / populacao2;  
    power2 = (float)populacao2 + NPT2 + PIB2 + area2 + PIBP2 - DP2;

    // --- menu principal ---
    printf("----- SUPER TRUNFO -----\n");
    printf("     MENU PRINCIPAL     \n");
    printf("\n1. INICIAR O JOGO\n");
    printf("2. REGRAS\n");
    printf("3. SAIR\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) 
    {
    case 1:
        // --- menu de interação para escolher qual atributo vai ser comparado ---
        printf("\n--------------- SUPER TRUNFO --------------\n");
        printf("ESCOLHA UM DOS ATRIBUTOS PARA SER COMPARADO\n");
        printf("\n1. POPULAÇÃO\n");
        printf("2. AREA\n");
        printf("3. PIB\n");
        printf("4. PONTOS TURISTICOS\n");
        printf("5. DENSIDADE POPULACIONAL\n");
        printf("6. PIB per CAPITA\n");
        printf("7. NIVEL DE PODER\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao2);

        // --- menu de interação para escolher segundo atributo ---
        do {
            printf("\n----------------- SUPER TRUNFO ----------------\n");
            printf("ESCOLHA O SEGUNDO ATRIBUTO (NAO PODE SER O MESMO)\n");
            printf("\n1. POPULAÇÃO\n");
            printf("2. AREA\n");
            printf("3. PIB\n");
            printf("4. PONTOS TURISTICOS\n");
            printf("5. DENSIDADE POPULACIONAL\n");
            printf("6. PIB per CAPITA\n");
            printf("7. NIVEL DE PODER\n");
            printf("\nEscolha uma opção: ");
            scanf("%d", &opcao3);
        } while (opcao2 == opcao3); // garantir que nao seja o mesmo atributo

    printf("\n---- ATRIBUTO 1: ");
    switch (opcao2) 
    {
    case 1:  // --- população ---
        printf("POPULAÇÃO ----\n");
        printf("CARTA 1: %lu | CARTA 2: %lu\n", populacao1, populacao2);
        carta1 += populacao1;
        carta2 += populacao2;
        break;
    case 2:  // --- area ---
        printf("AREA ----\n");
        printf("CARTA 1: %.2f km² | CARTA 2: %.2f km²\n", area1, area2);
        carta1 += area1;
        carta2 += area2;
        break;
    case 3:  // --- pib ---
        printf("PIB ----\n");
        printf("CARTA 1: %.2f bilhões | CARTA 2: %.2f bilhões\n", PIB1, PIB2);
        carta1 += PIB1;
        carta2 += PIB2;
        break;
    case 4:  // --- pontos Turísticos ---
        printf("PONTOS TURISTICOS ----\n");
        printf("CARTA 1: %d | CARTA 2: %d\n", NPT1, NPT2);
        carta1 += NPT1;
        carta2 += NPT1;
        break;
    case 5:  // --- densidade Populacional ---
        printf("DENSIDADE POPULACIONAL ----\n");
        printf("CARTA 1: %.2f hab/km² | CARTA 2: %.2f hab/km²\n", DP1, DP2);
        carta1 += DP1;
        carta2 += DP2;
        break;
    case 6: // --- pib per capita ---
        printf("PIB per CAPITA ----\n");
        printf("CARTA 1: %.2f | CARTA 2: %.2f\n", PIBP1, PIBP2);
        carta1 += PIBP1;
        carta2 += PIBP2;
        break;
    case 7: // ---- nivel de poder ---
        printf("NIVEL DE PODER ----\n");
        printf("CARTA 1: %.2f | CARTA 2: %.2f\n", power1, power2);
        carta1 += power1;
        carta2 += power2;
        break;
    default:
        printf("OPÇAO INVALIDA!\n");
        break;
    }

    // comparação do segundo atributo
    printf("\n---- ATRIBUTO 2: ");
    switch (opcao3) 
    {
    case 1:  // --- população ---
        printf("POPULAÇÃO ----\n");
        printf("CARTA1: %lu | CARTA 2: %lu\n", populacao1, populacao2);
        carta1 += populacao1;
        carta2 += populacao2;
        break;
    case 2:  // --- area ---
        printf("AREA ----\n");
        printf("CARTA 1: %.2f km² | CARTA 2: %.2f km²\n", area1, area2);
        carta1 += area1;
        carta2 += area2;
        break;
    case 3:  // --- pib ---
        printf("PIB ----\n");
        printf("CARTA 1: %.2f bilhões | CARTA 2: %.2f bilhões\n", PIB1, PIB2);
        carta1 += PIB1;
        carta2 += PIB2;
        break;
    case 4:  // --- pontos turisticos ---
        printf("PONTOS TURISTICOS ----\n");
        printf("CARTA 1: %d | CARTA 2: %d\n", NPT1, NPT2);
        carta1 += NPT1;
        carta2 += NPT2;
        break;
    case 5:  // --- densidade Populacional ---
        printf("DENSIDADE POPULACIONAL ----\n");
        printf("CARTA 1: %.2f hab/km² | CARTA 2: %.2f hab/km²\n", DP1, DP2);
        carta1 += DP1;
        carta2 += DP2;
        break;
    case 6: // --- pib per capita ---
        printf("PIB per CAPITA ----\n");
        printf("CARTA 1: %.2f | CARTA 2: %.2f\n", PIBP1, PIBP2);
        carta1 += PIBP1;
        carta2 += PIBP2;
        break;
    case 7: // ---- nivel de poder ---
        printf("NIVEL DE PODER ----\n");
        printf("CARTA 1: %.2f | CARTA 2: %.2f\n", power1, power2);
        carta1 += power1;
        carta2 += power2;
        break;
    default:
        printf("OPÇAO INVALIDA!\n");
        break;
    }

    // --- soma dos atributos para cada carta ---
    printf("\n---- SOMA DOS ATRIBUTOS ----\n");
    printf("CARTA 1 - %s: %.2f\n", cidade1, carta1);
    printf("CARTA 2 - %s: %.2f\n", cidade2, carta2);

    // --- determinar o vencedor ---
    if (carta1 > carta2) {
        printf("\nRESULTADO: CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (carta2 > carta1) {
        printf("\nRESULTADO: CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("\nRESULTADO: EMPATE!\n");
    }
        break;
    case 2:
        printf("REGRAS...");
        break;
    case 3:
        printf("FIM DE JOGO!");
        break;
    default:
        printf("OPÇAO INVALIDA!");
        break;
    }
}