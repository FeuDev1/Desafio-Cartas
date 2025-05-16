#include <stdio.h>
#include <string.h>

struct Carta {
    char nomePais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

float obterValor(struct Carta carta, int atributo) {
    switch (atributo) {
        case 1: return (float)carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return (float)carta.pontosTuristicos;
        case 5: return carta.densidade;
        default: return 0;
    }
}

void imprimirNomeAtributo(int atributo) {
    switch (atributo) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
        default: printf("Desconhecido");
    }
}

int main() {
    struct Carta carta1 = {"Brasil", 260000000, 8500000.0, 2000.0, 80, 3};
    struct Carta carta2 = {"Argentina", 96000000, 270000.0, 100.0, 50, 2};

    // Cálculo da densidade demográfica
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    int atributo1, atributo2;

    // Menu de seleção do primeiro atributo
    printf("=== SUPER TRUNFO: COMPARAÇÃO AVANÇADA ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Atributo inválido. Encerrando.\n");
        return 1;
    }

    // Menu de seleção do segundo atributo (dinâmico)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            printf("%d - ", i);
            imprimirNomeAtributo(i);
            printf("\n");
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Atributo inválido ou repetido. Encerrando.\n");
        return 1;
    }

    // Obter valores dos atributos
    float valor1Attr1 = obterValor(carta1, atributo1);
    float valor2Attr1 = obterValor(carta2, atributo1);

    float valor1Attr2 = obterValor(carta1, atributo2);
    float valor2Attr2 = obterValor(carta2, atributo2);

    // Exibição dos valores
    printf("\nComparando: %s VS %s\n", carta1.nomePais, carta2.nomePais);

    printf("\nAtributo 1: ");
    imprimirNomeAtributo(atributo1);
    printf("\n%s: %.2f\n", carta1.nomePais, valor1Attr1);
    printf("%s: %.2f\n", carta2.nomePais, valor2Attr1);

    printf("\nAtributo 2: ");
    imprimirNomeAtributo(atributo2);
    printf("\n%s: %.2f\n", carta1.nomePais, valor1Attr2);
    printf("%s: %.2f\n", carta2.nomePais, valor2Attr2);

    // Lógica de comparação
    int v1_attr1 = (atributo1 == 5) ? (valor1Attr1 < valor2Attr1) : (valor1Attr1 > valor2Attr1);
    int v1_attr2 = (atributo2 == 5) ? (valor1Attr2 < valor2Attr2) : (valor1Attr2 > valor2Attr2);

    float soma1 = valor1Attr1 + valor1Attr2;
    float soma2 = valor2Attr1 + valor2Attr2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("%s venceu em %d atributo(s)\n", carta1.nomePais, v1_attr1 + v1_attr2);
    printf("%s venceu em %d atributo(s)\n", carta2.nomePais, 2 - (v1_attr1 + v1_attr2));

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", carta1.nomePais, soma1);
    printf("%s: %.2f\n", carta2.nomePais, soma2);

    printf("\nResultado Final: ");
    soma1 > soma2
        ? printf("%s venceu a rodada!\n", carta1.nomePais)
        : (soma2 > soma1
           ? printf("%s venceu a rodada!\n", carta2.nomePais)
           : printf("Empate!\n"));

    return 0;
}