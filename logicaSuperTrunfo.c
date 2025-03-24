#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char Estado1;
    char CodigoCarta1[3];
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
    

    printf("Bem Vindo ao Jogo De Cartas!!!: \n");

    printf("Digite a Inicial Do Estado e o Código da primeira carta de 01 a 03: \n");
    scanf("%c", &Estado1);
    scanf("%2s", &CodigoCarta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a AreaKM: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos1);
    
    //CALCULO DENSIDADE E PIB PER CAPITa

    DensidadePopulacional1 = (populacao1 / areakm1);
    PibPerCapita1 = (pib1 * 10000000.00 / populacao1);
 
    printf("Densidade Populacional: %2.f\n", DensidadePopulacional1);
    printf("Pib Per Capita:R$ %.2lf bilhões\n ", PibPerCapita1);
    
    printf("------------------------------------------------------------\n");                                                                                                      
    //CADASTRO SEGUNDA CARTA

    printf("Digite a Inicial Do Estado e o Código da Segunda carta de 04 a 08: \n");
    scanf("%c", &Estado2);
    scanf("%4s", &CodigoCarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a AreaKM: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos2);
    
    //CALCULO DENSIDADE E PIB PER CAPITA

    DensidadePopulacional2 = (populacao2 / areakm2);
    PibPerCapita2 = (pib2 * 10000000.00 / populacao2);

    printf("Densidade Populacional: %2.f\n", DensidadePopulacional2);
    printf("Pib Per Capita:R$ %.2lf bilhões\n ", PibPerCapita2);

    //COMPARAÇÃO

    int cartaVencedora;
    char carta1;
    char carta2;

    printf("---------------------------------------------------------------------------- \n");

    printf("Resultado Carta1: %d\n", populacao1);
    printf("Resultado Carta2: %d\n", populacao2);

    printf("---------------------------------------------------------------------------- \n");

    if (populacao1 > populacao2){
        printf("Carta 1 Venceu \n");
    } else{
        printf("Carta 2 Venceu \n");
    }

    printf("---------------------------------------------------------------------------- \n");


  
    return 0;
}
