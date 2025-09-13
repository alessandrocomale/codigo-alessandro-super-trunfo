#include <stdio.h>


typedef struct {
    char estado;              
    char codigo[4];           
    char cidade[50];          
    int  populacao;           
    float area;               
    float pib;                
    int  pontos_turisticos;   
} Carta;

int main() {
    Carta carta1, carta2;

    // --- Leitura da primeira carta ---
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    float densidade=c1.populacao / c1 .area;
    float pib_per_capita = carta 1.pib / carta 1 populacao;

    
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo (ex: A01): ");
    scanf("%3s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    float densidade=c1.populacao / carta 2 .area;
    float pib_per_capita = c1.pib / carta 2 populacao;
    
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("/n=== Resultados Calculados===/n");
    printf("Densidade Populacional :%.2f hab/km²/n",densidade);
    printf("PIB per Capita : %.2f/n,pib_per_capita);
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
printf("/n=== Resultados Calculados===/n");
    printf("Densidade Populacional :%.2f hab/km²/n",densidade);
    printf("PIB per Capita : %.2f/n,pib_per_capita);
    return 0;
}
