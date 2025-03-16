#include <stdio.h>

int main() {
// --- variantes para armazenar os dados das cartas ---
char estado1, estado2;                         // sigla do estado (ex:'A','B')
char codigo1[30], codigo2[30];                 // codigo da carta (ex: 'A01','B01')
char cidade1[30], cidade2[30]; 
unsigned long int populacao1, populacao2; 
int NPT1, NPT2;                                // NPT = numero de pontos turisticos
float PIB1, PIB2, PIBP1, PIBP2;                // PIBP = PIB per CAPITA
float area1, area2, DP1, DP2;                  // DP = Densidade populacional
float power1, power2;                   

// --- leitura dos dados da primeira carta ---
printf("digite a sigla do estado da carta 1 (ex:'A','B'): \n");
scanf(" %c", &estado1);
printf("digite o codigo da carta 1 (ex:'A01','B01'): \n");
scanf("%s", codigo1);
printf("digite o nome da cidade (carta 1): \n");
scanf("%s", cidade1);
printf("digite a população total (carta 1): \n");
scanf("%lu", &populacao1);
printf("digite o numero de pontos turisticos (carta 1): \n");
scanf("%d", &NPT1);
printf("digite o pib (carta 1): \n");
scanf("%f", &PIB1);
printf("digite a area da cidade (carta 1): \n");
scanf("%f", &area1);

// --- leitura dos dados da segunda carta ---
printf("digite a sigla do estado da carta 2 (ex:'A','B'): \n");
scanf(" %c", &estado2);
printf("digite o codigo da carta 2 (ex:'A01','B01'): \n");
scanf("%s", codigo2);
printf("digite o nome da cidade (carta 2): \n");
scanf("%s", cidade2);
printf("digite a população total (carta 2): \n");
scanf("%lu", &populacao2);
printf("digite o numero de pontos turisticos (carta 2): \n");
scanf("%d", &NPT2);
printf("digite o pib (carta 2): \n");
scanf("%f", &PIB2);
printf("digite a area da cidade (carta 2): \n");
scanf("%f", &area2);

// ---- calculos ---
DP1 = (float)populacao1 / area1;
PIBP1 = (PIB1 * 1000000.0) / populacao1;
power1 = (float)populacao1 + NPT1 + PIB1 + area1 + PIBP1 - DP1;

DP2 = (float)populacao2 / area2;
PIBP2 = (PIB2 * 1000000.0) / populacao2; 
power2 = (float)populacao2 + NPT2 + PIB2 + area2 + PIBP2 - DP2; 

// --- exibiçao dos dados da primeira carta ---
printf("\n--- CARTA 1 ---\n");
printf("ESTADO: %c\n", estado1);
printf("CODIGO: %s\n", codigo1);
printf("NOME DA CIDADE: %s\n", cidade1);
printf("POPULAÇÃO: %lu\n", populacao1);
printf("AREA: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("NUMERO DE PONTOS TURISTICOS: %d\n", NPT1);
printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DP1);
printf("PIB per CAPITA: %.2f reais\n", PIBP1);

// --- exibiçao dos dados da segunda carta ---
printf("\n--- CARTA 2 ---\n");
printf("ESTADO: %c\n", estado2);
printf("CODIGO: %s\n", codigo2);
printf("NOME DA CIDADE: %s\n", cidade2);
printf("POPULAÇÃO: %lu\n", populacao2);
printf("AREA: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("NUMERO DE PONTOS TURISTICOS: %d\n", NPT2);    
printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DP2);
printf("PIB per CAPITA: %.2f reais\n", PIBP2);

// --- Exibição da comparação dos dados das cartas ---
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

return 0;
}