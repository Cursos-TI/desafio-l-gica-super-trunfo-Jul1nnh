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

        switch (opcao2)
        {
        case 1: // --- população ---
            printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO: POPULAÇÃO) ---\n");
            printf("\nCARTA 1 - %s: %lu\n", cidade1, populacao1);
            printf("CARTA 2 - %s: %lu\n", cidade2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao1 == populacao2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 2: // --- area ---
            printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO: AREA) ---\n");
            printf("\nCARTA 1 - %s: %.2f km²\n", cidade1, area1);
            printf("CARTA 2 - %s: %.2f km²\n", cidade2, area2);
            
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area1 == area2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 3: // --- pib --- 
            printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO: PIB) ---\n");
            printf("\nCARTA 1 - %s: %.2f bilhões de reais\n", cidade1, PIB1);
            printf("CARTA 2 - %s: %.2f bilhões de reais\n", cidade2, PIB2);
            
            if (PIB1 > PIB2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (PIB1 == PIB2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } 
            break;
        case 4: // --- pontos turisticos --- 
            printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO: PONTOS TURISTICOS) ---\n");
            printf("\nCARTA 1 - %s: %d\n", cidade1, NPT1);
            printf("CARTA 2 - %s: %d\n", cidade2, NPT2);
            
            if (NPT1 > NPT2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (NPT1 == NPT2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } 
            break;
        case 5: // --- densidade populacional ---
            printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL) ---\n");
            printf("\nCARTA 1 - %s: %.2f hab/km²\n", cidade1, DP1);
            printf("CARTA 2 - %s: %.2f hab/km²\n", cidade2, DP2);
            
            if (DP1 < DP2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (DP1 == DP2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 6: // --- pib per capita ---
            printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO: PIB per CAPITA) ---\n");
            printf("\nCARTA 1 - %s: %.2f reais\n", cidade1, PIBP1);
            printf("CARTA 2 - %s: %.2f reais\n", cidade2, PIBP2);
            
            if (PIBP1 > PIBP2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (PIBP1 == PIBP2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 7: // --- nivel de poder ---
            printf("\n--- COMPARAÇÃO DAS CARTAS (ATRIBUTO: NIVEL DE PODER) ---\n");
            printf("\nCARTA 1 - %s: %.2f\n", cidade1, power1);
            printf("CARTA 2 - %s: %.2f\n", cidade2, power2);
            
            if (power1 > power2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (power1 == power2) {
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;    
        default:
            printf("OPÇÃO INVALIDA!");
            break;
        }
        break;
    case 2:
        printf("---- REGRAS ----\n");
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
        break;
    case 3:
        printf("FIM DE JOGO!");
        break;    
    default:
        printf("OPÇÃO INVALIDA!");
        break;
    }
}