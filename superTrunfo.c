#include <stdio.h>
#include <string.h>

typedef struct {
    char pais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
} Carta;

int main() {
    Carta c1, c2;
    int opcao;

    // --- Cadastro das cartas ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", c1.pais);
    printf("Populacao: ");
    scanf("%lu", &c1.populacao);
    printf("Area: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    c1.densidade = c1.populacao / c1.area;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", c2.pais);
    printf("Populacao: ");
    scanf("%lu", &c2.populacao);
    printf("Area: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    c2.densidade = c2.populacao / c2.area;

    // --- Menu de comparação ---
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    float v1 = 0, v2 = 0;
    char atributo[50];

    switch(opcao) {
        case 1:
            v1 = c1.populacao;
            v2 = c2.populacao;
            strcpy(atributo, "Populacao");
            break;

        case 2:
            v1 = c1.area;
            v2 = c2.area;
            strcpy(atributo, "Area");
            break;

        case 3:
            v1 = c1.pib;
            v2 = c2.pib;
            strcpy(atributo, "PIB");
            break;

        case 4:
            v1 = c1.pontosTuristicos;
            v2 = c2.pontosTuristicos;
            strcpy(atributo, "Pontos Turisticos");
            break;

        case 5:
            v1 = c1.densidade;
            v2 = c2.densidade;
            strcpy(atributo, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("\n=== RESULTADO ===\n");
    printf("Comparacao pelo atributo: %s\n", atributo);
    printf("%s: %.2f\n", c1.pais, v1);
    printf("%s: %.2f\n", c2.pais, v2);

    if(opcao == 5) {
        if(v1 < v2) printf("\nVencedor: %s\n", c1.pais);
        else if(v2 < v1) printf("\nVencedor: %s\n", c2.pais);
        else printf("\nEmpate!\n");
    } else {
        if(v1 > v2) printf("\nVencedor: %s\n", c1.pais);
        else if(v2 > v1) printf("\nVencedor: %s\n", c2.pais);
        else printf("\nEmpate!\n");
    }

    return 0;
}
