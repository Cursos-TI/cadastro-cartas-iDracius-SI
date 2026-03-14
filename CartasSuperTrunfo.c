#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  
    // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1, estado2;
char cidade1_estado1 [50], cidade1_estado2 [50];
char codigo_cidade1_estado1 [10] = "A01", codigo_cidade1_estado2 [10] = "B01";
int população_cidade1 = 2, população_cidade2 = 2;
float area_cidade1 = 105.4, area_cidade2 = 47.87;
float pib_cidade1 = 3.16, pib_cidade2 = 89.5;
int ponto_turistico1 = 17, ponto_turistico2 = 10;


  // ÀREA PARA ENTRADA DE DADOS

  // (Carta 1)
    printf("INSIRA AS INFORMAÇÔES DA CARTA 1:\n");
    printf("Estado:\n");
    scanf(" %c", &estado1);


printf("Nome da Cidade:\n");
scanf(" %49[^\n]", cidade1_estado1);


printf("carta 1 registrada com sucesso!\n");
printf("INSIRA AS INFORMAÇÔES DA CARTA 2:\n");
printf("\n");

    // (Carta 2)
printf("Estado:\n");
scanf(" %c", &estado2);


    printf("Nome da Cidade:\n");
    scanf(" %49[^\n]", cidade1_estado2);
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
printf("População: %d milhões de habitantes\n", população_cidade1);
printf("Àrea da cidade: %.2f km²\n", area_cidade1);
printf("PIB: UR$ %.2f trilhões\n", pib_cidade1);
printf("Pontos turísticos: %d\n", ponto_turistico1);

printf("\n");

    // (CARTA 2)
    printf("Carta2:\n");
printf("Estado: %c\n", estado2);
printf("Cidade: %s\n", cidade1_estado2);
printf("Codigo: %s\n", codigo_cidade1_estado2);
printf("População: %d milhões de habitantes\n", população_cidade2);
printf("Àrea da cidade %.2f km²\n", area_cidade2);
printf("PIB: %.2f bilhões de reais\n", pib_cidade2);
printf("Pontos turísticos: %d\n", ponto_turistico2);


return 0;
} 