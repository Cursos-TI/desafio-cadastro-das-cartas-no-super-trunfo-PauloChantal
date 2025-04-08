#include <stdio.h>
#include <string.h>

// Definição da estrutura para a carta
typedef struct {
    char estado[3];       // Codigo do estado
    char codigo[3];       // Codigo da carta
    char nome[50];        // Nome da cidade
    int populacao;        // Populacao
    float area;           // Area em km
    float pib;            // PIB em milhoes
    int pontosTuristicos; // Numero de pontos turisticos
} Carta;

void exibirCarta(Carta c) {
    printf("Carta Super Trunfo: %s\n", c.nome);
    printf("Estado: %s\n", c.estado);
    printf("Codigo da carta: %s\n", c.codigo);
    printf("Populacao: %d habitantes\n", c.populacao);
    printf("Area: %.2f km\n", c.area);
    printf("PIB: R$ %.2f milhoes\n", c.pib);
    printf("Numero de pontos turisticos: %d\n", c.pontosTuristicos);
}

int main() {
    // Criando a carta de Teresina
    Carta teresina;
    
    // Atribuindo os valores à carta
    strcpy(teresina.estado, "P");           // Codigo do estado Piaui
    strcpy(teresina.codigo, "P1");          // Codigo da carta
    strcpy(teresina.nome, "Teresina");      // Nome da cidade
    teresina.populacao = 926000;            // Populacao
    teresina.area = 1723.4;                 // Area em km
    teresina.pib = 17800000.00;             // PIB em milhoes
    teresina.pontosTuristicos = 10;         // Numero de pontos turisticos


    // Criando a carta de Sao Luis
    Carta saoLuis;
    strcpy(saoLuis.estado, "M");
    strcpy(saoLuis.codigo, "M1");
    strcpy(saoLuis.nome, "Sao Luis");
    saoLuis.populacao = 1088057;
    saoLuis.area = 834.00;
    saoLuis.pib = 28000000.00;
    saoLuis.pontosTuristicos = 11;

    // Exibindo as cartas
    exibirCarta(teresina);
    exibirCarta(saoLuis);

    return 0;
}
