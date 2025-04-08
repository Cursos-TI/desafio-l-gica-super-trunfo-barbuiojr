#include <stdio.h>

void main(){
    char estado_1[1], estado_2[1];
    char codigo_1[3], codigo_2[3];
    char cidade_1[20], cidade_2[20];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    float densidade_pop_1, densidade_pop_2, pib_perc_1, pib_perc_2;
    int tur_1, tur_2;

    printf("*** Coleta de dados ***\n");
    printf("Cidade 1:\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado_1);

    printf("Digite o codigo:\n");
    scanf("%s", &codigo_1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade_1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao_1);

    printf("Digite a area em km2:\n");
    scanf("%f", &area_1);

    printf("Digite o PIB em bilhoes de reais:\n");
    scanf("%f", &pib_1);

    densidade_pop_1 = (float) populacao_1/area_1;
    pib_perc_1 = (float) (pib_1*1000000000)/populacao_1;

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &tur_1);

    printf("\nCidade 2:\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado_2);

    printf("Digite o codigo:\n");
    scanf("%s", &codigo_2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade_2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao_2);

    printf("Digite a area em km2:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB em bilhoes de reais:\n");
    scanf("%f", &pib_2);

    densidade_pop_2 = (float) populacao_2/area_2;
    pib_perc_2 = (float) (pib_2*1000000000)/populacao_2;

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &tur_2);

    printf("\n Dados coletados:\n");
    printf("--------------------------------\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Codigo: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km2\n", area_1);
    printf("PIB: %.2f bilhoes de reais\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n", tur_1);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidade_pop_1);
    printf("PIB per Capita: %.2f reais\n\n", pib_perc_1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Codigo: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f km2\n", area_2);
    printf("PIB: %.2f bilhoes de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", tur_2);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidade_pop_2);
    printf("PIB per Capita: %.2f reais\n\n", pib_perc_2);

}
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
