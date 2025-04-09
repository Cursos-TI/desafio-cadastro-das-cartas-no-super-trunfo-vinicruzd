#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    ///Dados da Primeira Carta

    char Estado1;
    char Codigo1[2];
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

//Dados da Segunda Carta

    char Estado2;
    char Codigo2[2];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

//Coleta de Dados da Primeira Carta

    printf("Digite uma letra de A a H para a primeira carta: \n");
    scanf("%c", &Estado1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite o valor da população da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite o valor da área da cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o valor do PIB da cidade: \n");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos1);
    
  //Informações da Primeira Carta na Tela  
    printf("Dados da Primeira carta: \n");
    printf("Estado: %c \n", Estado1);
    printf("Codigo da Carta: %s \n", Codigo1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área da cidade: %f \n", Area1);
    printf("PIB da cidade: %f \n", Pib1);
    printf("Pontos Turisticos: %d \n", PontosTuristicos1);


    //Coleta de Dados da Segunda Carta

        printf("Digite uma letra de A a H para a segunda carta: \n");
        scanf("%c", &Estado2);

        printf("Digite o codigo da cidade: \n");
        scanf("%s", &Codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &Cidade2);

        printf("Digite o valor da população da cidade: \n");
        scanf("%d", &Populacao2);

        printf("Digite o valor da área da cidade: \n");
        scanf("%f", &Area2);

        printf("Digite o valor do PIB da cidade: \n");
        scanf("%f", &Pib2);

        printf("Digite o número de pontos turisticos da cidade: \n");
        scanf("%d", &PontosTuristicos2);

    //Informações da Segunda Carta na Tela  
    
        printf("Dados da Segunda Carta: \n");
        printf("Estado: %c \n", Estado2);
        printf("Codigo da Carta: %s \n", Codigo2);
        printf("Nome da Cidade: %s \n", Cidade2);
        printf("População: %d \n", Populacao2);
        printf("Área da cidade: %f \n", Area2);
        printf("PIB da cidade: %f \n", Pib2);
        printf("Pontos Turisticos: %d \n", PontosTuristicos2);

    return 0;
}
