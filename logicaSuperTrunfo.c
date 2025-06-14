#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado[20], codigoCarta[20], cidade[30];
    int populacao;
    float area, pib, pontosTuristicos, densidade, pibPerCapita;
    char estado2[20], codigoCarta2[20], cidade2[30];
    int populacao2;
    float area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Leitura da Primeira Carta
    printf("Leitura da Primeira Carta \n")
    printf("Digite o código da Primeira Carta: \n");
    scanf("%s", codigo);
    printf("Digite o Estado dessa Cidade: \n");
    scanf("%s", estado);
    printf("Digite o nome da Cidade da Primeira Carta: \n");
    scanf("%s", cidade);
    printf("Digite a populacao da Cidade da Primeira Carta : \n");
    scanf("%d", populacao);
    printf("Digite a area da Cidade da Primeira Carta : \n");
    scanf("%f", area);
    printf("Digite o PIB da Primeira Carta: \n");
    scanf("%f", pib);
    printf("Digite a Quantidade de Pontos Turisticos da Cidade da Primeira Carta : \n");
    scanf("%f", pontosTuristicos);
    densidade = populacao / area;
    pibPerCapita = pib / populacao;

    // Leitura da Segunda Carta
    printf("Leitura da Segunda Carta \n")
    printf("Digite o código da Segunda Carta: \n");
    scanf("%s", codigo2);
    printf("Digite o Estado dessa Cidade: \n");
    scanf("%s", estado2);
    printf("Digite o nome da Cidade da Segunda Carta: \n");
    scanf("%s", cidade2);
    printf("Digite a populacao da Cidade da Segunda Carta : \n");
    scanf("%d", populacao2);
    printf("Digite a area da Cidade da Segunda Carta : \n");
    scanf("%f", area2);
    printf("Digite o PIB da Segunda Carta: \n");
    scanf("%f", pib2);
    printf("Digite a Quantidade de Pontos Turisticos da Cidade da Segunda Carta : \n");
    scanf("%f", pontosTuristicos2);
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
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

    return 0;
}
