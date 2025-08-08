#include <stdio.h>

int main() {
    // Declarando as variáveis
    char estado1, estado2;
    char codigoDoEstado1[20];
    char codigoDoEstado2[20];
    char nomeDaCidade1[20];
    char nomeDaCidade2[20];
    unsigned long int populacaoCidade1, populacaoCidade2; // unsigned long int
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    float areaEmKm1, areaEmKm2;
    float pib1, pib2;
    float densidadeCidade1, densidadeCidade2;
    float pibPerCapta1, pibPerCapta2;
    float superPoder1, superPoder2;

    // Lendo os dados do usuário e montando a primeira carta
    printf("Insira a letra do primeiro estado: \n");
    scanf(" %c", &estado1); // espaço antes para ignorar enter
    printf("Insira o código do primeiro estado: \n");
    scanf("%s", codigoDoEstado1);
    printf("Insira o nome da primeira cidade: \n");
    scanf("%s", nomeDaCidade1);
    printf("Insira a população da primeira cidade: \n");
    scanf("%lu", &populacaoCidade1);
    printf("Insira a área em KM² da primeira cidade: \n");
    scanf("%f", &areaEmKm1);
    printf("Insira o PIB da primeira cidade: \n");
    scanf(" %f", &pib1);
    printf("Insira o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    // Lendo os dados da segunda carta
    printf("Insira a letra do segundo estado: \n");
    scanf(" %c", &estado2);
    printf("Insira o código do segundo estado: \n");
    scanf("%s", codigoDoEstado2);
    printf("Insira o nome da segunda cidade: \n");
    scanf("%s", nomeDaCidade2);
    printf("Insira a população da segunda cidade: \n");
    scanf("%lu", &populacaoCidade2);
    printf("Insira a área em KM² da segunda cidade: \n");
    scanf("%f", &areaEmKm2);
    printf("Insira o PIB da segunda cidade: \n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    // Calculando densidade e PIB per capita
    densidadeCidade1 = (float)populacaoCidade1 / areaEmKm1;
    densidadeCidade2 = (float)populacaoCidade2 / areaEmKm2;

    pibPerCapta1 = pib1 / (float)populacaoCidade1;
    pibPerCapta2 = pib2 / (float)populacaoCidade2;

    // Calculando super poder
    superPoder1 = (float)populacaoCidade1 + areaEmKm1 + pib1 + numeroDePontosTuristicos1 + pibPerCapta1 + (1.0f / densidadeCidade1);
    superPoder2 = (float)populacaoCidade2 + areaEmKm2 + pib2 + numeroDePontosTuristicos2 + pibPerCapta2 + (1.0f / densidadeCidade2);

    // Exibindo resultados das comparações
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacaoCidade1 > populacaoCidade2);
    printf("Area: Carta 1 venceu (%d)\n", areaEmKm1 > areaEmKm2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", numeroDePontosTuristicos1 > numeroDePontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadeCidade1 < densidadeCidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapta1 > pibPerCapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    if(numeroDePontosTuristicos1 > numeroDePontosTuristicos2)
    {
        printf("Carta 1 ( %s ) com o atributo população ( %d )", nomeDaCidade1, populacaoCidade1);
        printf("Carta 2 ( %s ) com atributo população ( %d )", nomeDaCidade2, populacaoCidade2);

        printf("Carta 1 ( %s ) venceu! ", nomeDaCidade1);
    } else {
         printf("Carta 1 ( %s ) com o atributo população ( %d )", nomeDaCidade1, populacaoCidade1);
        printf("Carta 2 ( %s ) com atributo população ( %d )", nomeDaCidade2, populacaoCidade2);

        printf("Carta 2 ( %s ) venceu! ", nomeDaCidade2);
    }

    return 0;
}