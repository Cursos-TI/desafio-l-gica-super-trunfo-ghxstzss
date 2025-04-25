#include <stdio.h>
#include <stdlib.h>

int main() {
    char Estado1;
    char CodigoCarta1[4];
    char nomeCidade1[100];
    int populacao1;
    float areakm1;
    double pib1;
    int pontosTuristicos1;
    float DensidadePopulacional1;
    double PibPerCapita1;

    char Estado2;
    char CodigoCarta2[4];
    char nomeCidade2[100];
    int populacao2;
    float areakm2;
    double pib2;
    int pontosTuristicos2;
    float DensidadePopulacional2;
    double PibPerCapita2;

    int opcao;

    printf("Bem-vindo ao Jogo de Cartas!\n");

    // Cadastro da primeira carta
    printf("\n--- Primeira Carta ---\n");
    printf("Digite a inicial do Estado e o Código da primeira carta (ex: A 01): ");
    scanf(" %c %3s", &Estado1, CodigoCarta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &areakm1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    DensidadePopulacional1 = populacao1 / areakm1;
    PibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: R$ %.2lf\n", PibPerCapita1);

    printf("\n------------------------------------------------------------\n");

    // Cadastro da segunda carta
    printf("\n--- Segunda Carta ---\n");
    printf("Digite a inicial do Estado e o Código da segunda carta (ex: B 04): ");
    scanf(" %c %3s", &Estado2, CodigoCarta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &areakm2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    DensidadePopulacional2 = populacao2 / areakm2;
    PibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: R$ %.2lf\n", PibPerCapita2);

    // Menu de comparação
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1:
            printf("População: %d x %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Área: %.2f km² x %.2f km²\n", areakm1, areakm2);
            if (areakm1 > areakm2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (areakm2 > areakm1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2lf bilhões x %.2lf bilhões\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional: %.2f x %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2)
                printf("Vencedor: %s (menor densidade)\n", nomeCidade1);
            else if (DensidadePopulacional2 < DensidadePopulacional1)
                printf("Vencedor: %s (menor densidade)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
