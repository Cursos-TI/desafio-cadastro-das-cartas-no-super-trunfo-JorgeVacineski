#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jorge

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[20], CodigoCarta[5], NomeCidade[50];
    int populacao, pontosturisticos;
    float PIB, AREAKM2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("Digite o Estado com apenas 2 letras! \n ");
        scanf("%s", &estado);

        printf("Digite o Código da Carta! \n");
        scanf("%s", &CodigoCarta);

        printf("Digite o Nome da cidade! \n");
        scanf("%s", &NomeCidade);

        printf("Digite a população da Cidade! \n");
        scanf("%d", &populacao);

        printf("Digite a área da cidade! \n");
        scanf("%f", &AREAKM2);

        printf("Digite o PIB da Cidade! \n");
        scanf("%f", &PIB);

        printf("Digite quantos pontos turísticos a cidade possui! \n");
        scanf("%d", &pontosturisticos);

        printf("O Estado digitado foi: %s \n", &estado);
        printf("O código da carta digitado foi: %s \n", &CodigoCarta);
        printf("O nome da cidade digitado foi: %s \n", &NomeCidade);
        printf("A população da cidade digitada foi: %d \n", populacao);
        printf("A área da cidade digitada foi: %f \n", AREAKM2);
        printf("O PIB digitado foi: %f \n", PIB);
        printf("O número de pontos turísticos digitado foi: %d \n", pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}