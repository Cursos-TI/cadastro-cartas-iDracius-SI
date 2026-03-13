#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  
    // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1, estado2;
char cidade1_estado1 [50], cidade1_estado2 [50];
char codigo_cidade1_estado1 [10], codigo_cidade1_estado2 [10];
int população_cidade1, população_cidade2;
float area_cidade1, area_cidade2;
float pib_cidade1, pib_cidade2;
int ponto_turistico1, ponto_turistico2;



  // ÀREA PARA ENTRADA DE DADOS

  // (Carta 1)
    printf("INSIRA AS INFORMAÇÔES DA CARTA 1:\n");
    printf("Estado:\n");
    scanf(" %c", &estado1);


printf("Nome da Cidade:\n");
scanf(" %49[^\n]", cidade1_estado1);


    printf("Codigo da Cidade:\n");
    scanf("%s", codigo_cidade1_estado1);


printf("Insira abaixo a população:\n");
scanf("%d", &população_cidade1);


    printf("Insira o PIB:\n");
    scanf("%f", &pib_cidade1);


printf("Numero de pontos turísticos:\n");
scanf("%d", &ponto_turistico1);
printf("\n");

printf("carta 1 registrada com sucesso!\n");
printf("INSIRA AS INFORMAÇÔES DA CARTA 2:\n");
printf("\n");

    // (Carta 2)
printf("Estado:\n");
scanf(" %c", &estado2);


    printf("Nome da Cidade:\n");
    scanf(" %49[^\n]", cidade1_estado2);


printf("Codigo da Cidade:\n");
scanf("%s", codigo_cidade1_estado2);


    printf("Insira abaixo a população:\n");
    scanf("%d", &população_cidade2);


printf("Insira o PIB:\n");
scanf("%f", &pib_cidade2);


    printf("Numero de pontos turísticos:\n");
    scanf("%d", &ponto_turistico2);

  printf("\n");

    // Área para exibição dos dados da cidade
    printf("carta 2 registrada com sucesso!\n");
    printf("\n");

printf("EXIBIÇÂO DAS CARTAS\n");
printf("\n");


    // (CARTA 1)
    printf("Carta1:\n");

printf("Estado: %c\n", estado1);
printf("Cidade: %s\n", cidade1_estado1);
printf("Codigo: %s\n", codigo_cidade1_estado1);
printf("População: %d\n", população_cidade1);
printf("PIB: %.2f bilhões de Reais\n", pib_cidade1);
printf("Pontos turísticos: %d\n", ponto_turistico1);

printf("\n");

    // (CARTA 2)
    printf("Carta2:\n");
printf("Estado: %c\n", estado2);
printf("Cidade: %s\n", cidade1_estado2);
printf("Codigo: %s\n", codigo_cidade1_estado2);
printf("População: %d\n", população_cidade2);
printf("PIB: %.2f bilhões de reais\n", pib_cidade2);
printf("Pontos turísticos: %d\n", ponto_turistico2);


return 0;
} 