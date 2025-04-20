#include <stdio.h>
int main() {
    //segue a sequencia de variaveis para a carta 1
    char estado[03] = "A";
    char c_carta[4] = "A01";
    char n_cidade[20] = "Belem";
    int populacao = 35000;
    float area = 30000; // Em quilômetros quadrados
    float PIB = 20000000;
    int npt = 9;

        //segue a sequencia de variaveis para a carta 2
        char estado2[03] = "B";
        char c_carta2[4] = "B02"; //a letra do estado seguida de um número de 01 a 04
        char n_cidade2[20] = "Barcarena";
        int populacao2 = 25000;
        float area2 = 28000; // Em quilômetros quadrados
        float PIB2 = 15000000;
        int npt2 = 8;

    printf("Para a carta 1: \n digite seu estado (A a H): \n");
    scanf("%1s", estado);

    printf("Para a carta 1: \n digite o codigo da carta de 01 a 04 (ex: A01): \n");
    scanf("%3s", c_carta); // Lê no máximo 3 caracteres

    printf("Para a carta 1: \n digite o nome da cidade: \n");
    scanf("%s", n_cidade); // Para nomes sem espaços. Se precisar de espaços, use fgets.

    printf("Para a carta 1: \n digite o numero da populacao da cidade: \n");
    scanf("%d", &populacao); // Lê um inteiro para a população

    printf("Para a carta 1: \n digite a area em quilometros quadrados da cidade: \n");
    scanf("%f", &area);   // Lê um float para a área

    printf("Para a carta 1: \n digite PIB da cidade: \n");
    scanf("%f", &PIB);    // Lê um float para o PIB

    printf("Para a carta 1: \n digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &npt);    // Lê um inteiro para o número de pontos turísticos


        //segue os comandos para a carta 2
        printf("Para a carta 2: \n digite seu estado (A a H): \n");
        scanf("%1s", estado2);

        printf("Para a carta 2: \n digite o codigo da carta de 01 a 04 (ex: A01): \n");
        scanf("%3s", c_carta2); // Lê no máximo 3 caracteres

        printf("Para a carta 2: \n digite o nome da cidade: \n");
        scanf("%s", n_cidade2);

        printf("Para a carta 2: \n digite o numero da populacao da cidade: \n");
        scanf("%d", &populacao2); // Lê um inteiro para a população

        printf("Para a carta 2: \n digite a area em quilometros quadrados da cidade: \n");
        scanf("%f", &area2);   // Lê um float para a área

        printf("Para a carta 2: \n digite PIB da cidade: \n");
        scanf("%f", &PIB2);     // Lê um float para o PIB

        printf("Para a carta 2: \n digite o numero de pontos turisticos da cidade: \n");
        scanf("%d", &npt2);   // Lê um inteiro para o número de pontos turísticos


    printf("carta 1: \n o estado é: %s \n o código da carta: %s\n", estado, c_carta);
    printf("o nome da cidade é: %s \n a populacao é: %d\n", n_cidade, populacao);
    printf("a area é: %.2f \n o PIB é: %.2f\n o numero de pontos turisticos é: %d \n\n", area, PIB, npt);

        printf("carta 2: \n o estado é: %s \n o código da carta: %s\n", estado2, c_carta2);
        printf("o nome da cidade é: %s \n a populacao é: %d\n", n_cidade2, populacao2);
        printf("a area é: %.2f \n o PIB é: %.2f\n o numero de pontos turisticos é: %d \n", area2, PIB2, npt2);

    return 0;
}