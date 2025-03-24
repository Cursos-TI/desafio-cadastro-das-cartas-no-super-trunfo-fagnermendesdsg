#include <stdio.h>

int main() {

printf("Novo commit\n");

    // Variáveis da Carta 1
    char estado1[50], codigo1[4], nomecidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;
    float densidadepopulacional1, pibpercapita1, superpoder1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[4], nomecidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;
    float densidadepopulacional2, pibpercapita2, superpoder2;

    // Leitura dos dados da Carta 1
    printf("JOGO SUPER TRUNFO \nVamos começar? \n");

    printf("\nDigite o Estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Digite o Código da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade da primeira carta: \n");
    scanf("%s", nomecidade1);

    printf("Digite a População da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da primeira carta: \n");
    scanf("%d", &pontosturisticos1);

    // Cálculo dos atributos derivados da Carta 1
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);

    // Leitura dos dados da Carta 2
    printf("\nDigite o Estado da segunda carta: \n");
    scanf("%s", estado2);

    printf("Digite o Código da segunda carta: \n");
    scanf("%s", codigo2);

    printf("Digite a Cidade da segunda carta: \n");
    scanf("%s", nomecidade2);

    printf("Digite a População da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da segunda carta: \n");
    scanf("%d", &pontosturisticos2);

    // Cálculo dos atributos derivados da Carta 2
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

    // Exibição das informações formatadas
    printf("\nCARTA 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", pontosturisticos1);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f \n", pibpercapita1);
    printf("Super Poder: %.2f \n", superpoder1);

    printf("\nCARTA 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapita2);
    printf("Super Poder: %.2f \n", superpoder2);

    printf("\nAs Cartas foram registradas com sucesso!\n");

    // Comparação das cartas
    printf("\nQuem venceu no Duelo das Cartas? \n");

    // População
    printf("Resultado da População: %s venceu (%d)\n", populacao1 > populacao2 ? "Carta 1" : "Carta 2", populacao1 > populacao2);

    // Área
    printf("Resultado da Área: %s venceu (%d)\n", area1 > area2 ? "Carta 1" : "Carta 2", area1 > area2);

    // PIB
    printf("Resultado do PIB: %s venceu (%d)\n", pib1 > pib2 ? "Carta 1" : "Carta 2", pib1 > pib2);

    // Pontos Turísticos
    printf("Resultado dos Pontos Turísticos: %s venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? "Carta 1" : "Carta 2", pontosturisticos1 > pontosturisticos2);

    // Densidade Populacional (menor valor vence)
    printf("Resultado da Densidade Populacional: %s venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2 ? "Carta 1" : "Carta 2", densidadepopulacional1 < densidadepopulacional2);

    // PIB per Capita
    printf("Resultado do PIB per Capita: %s venceu (%d)\n", pibpercapita1 > pibpercapita2 ? "Carta 1" : "Carta 2", pibpercapita1 > pibpercapita2);

    // Super Poder
    printf("Resultado do Super Poder: %s venceu (%d)\n", superpoder1 > superpoder2 ? "Carta 1" : "Carta 2", superpoder1 > superpoder2);

    printf("Fim do jogo!");

    return 0;
}
