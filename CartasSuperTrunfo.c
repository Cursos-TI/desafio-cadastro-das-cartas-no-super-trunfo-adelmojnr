#include <stdio.h>
#include <string.h>
int main() {
    //Variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[70];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[70];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //coleta de dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade1, 70, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turistícos: ");
    scanf("%d", &pontos1);
    printf("\n");

    //coleta de dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf( " %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2, 70, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turistícos: ");
    scanf("%d", &pontos2);
    printf("\n");
    
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n",5 populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    return 0;
}
