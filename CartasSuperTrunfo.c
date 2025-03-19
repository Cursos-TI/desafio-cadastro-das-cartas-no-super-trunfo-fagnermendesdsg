#include <stdio.h>

int main() {

printf("Novo commit\n");

    char estado1[50] = "Ceará";
    char codigo1[4] = "A01";
    char nomecidade1[50] = "Fortaleza";
    int populacao1 = 60;
    float area1 = 5.6;
    float pib1 = 9.8;
    int pontosturisticos1 = 50;
    float densidadepopulacional1;
    float pibpercapita1; 

    // Capturando as entradas dos usuários para os atributos

    printf("*** JOGO SUPER TRUNFO *** \n");
    printf("Vamos começar? \n");

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

    printf("Densidade Populacional da primeira carta: \n");
    densidadepopulacional1 = populacao1 / area1;

    printf("PIB per Capita: \n");
    pibpercapita1 = pib1 / populacao1;
    

    // Exibição das informações formatadas

    printf("\nCARTA 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %2.f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", pontosturisticos1);
    printf("Densidade Populacional: %f \n", densidadepopulacional1);
    printf("PIB per Capita: %f \n", pibpercapita1);

     
    // Declaração das variáveis para a segunda carta

    char estado2[50] = "Alagoas";
    char codigo2[4] = "B02";
    char nomecidade2[50] = "Maceió";
    int populacao2 = 15;
    float area2 = 1.2;
    float pib2 = 2.3;
    int pontosturisticos2 = 30;
    float densidadepopulacional2;
    float pibpercapita2;
    
    // Capturando as entradas dos usuários para os atributos

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

    printf("Densidade Populacional da primeira carta: \n");
    densidadepopulacional2 = populacao2 / area2;

    printf("PIB per Capita: \n");
    pibpercapita2 = pib2 / populacao2;

    // Exibição das informações formatadas

    printf("\n CARTA 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %2.f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %f \n", densidadepopulacional2);
    printf("PIB per Capita: %f \n", pibpercapita2);

    printf("\nAs Cartas foram registradas com sucesso!\n");

    return 0;
}
