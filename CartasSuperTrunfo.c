#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração das variáveis para a primeira carta

printf("Novo commit\n");

    char estado1[50] = "Ceará";
    char codigo1[4] = "A01";
    char nomecidade1[50] = "Fortaleza";
    int populacao1 = 60;
    float area1 = 5.6;
    float pib1 = 9.8;
    int pontosturisticos1 = 50;

    // Capturando as entradas dos usuários para os atributos

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

    // Exibição das informações formatadas

    printf("\nCARTA 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %2.f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", pontosturisticos1);

     
    // Declaração das variáveis para a segunda carta

    char estado2[50] = "Alagoas";
    char codigo2[4] = "B02";
    char nomecidade2[50] = "Maceió";
    int populacao2 = 15;
    float area2 = 1.2;
    float pib2 = 2.3;
    int pontosturisticos2 = 30;
    
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

    // Exibição das informações formatadas

    printf("\n CARTA 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %2.f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d \n", pontosturisticos2);

    printf("\nAs Cartas foram registradas com sucesso!\n");

    return 0;
}
