#include <stdio.h>
int main() {
    //segue a sequencia de variaveis para a carta 1
    char estado[3] = "A";
    char c_carta[4] = "A01";
    char n_cidade[20] = "Belem";
    unsigned long int populacao = 35000;
    float area = 30000; // Em quilômetros quadrados
    float PIB = 20000000;
    int npt = 9;
    float dpop = (float) populacao/area; //para densidade populacional
    float pibpc = (float) PIB/populacao; //para pib per capita
    float SuperPoder1 = (float)((populacao + area + PIB + npt + pibpc) + (1/dpop));

        //segue a sequencia de variaveis para a carta 2
        char estado2[3] = "B";
        char c_carta2[4] = "B02"; //a letra do estado seguida de um número de 01 a 04
        char n_cidade2[20] = "Barcarena";
        unsigned long int populacao2 = 35000;
        float area2 = 30000; // Em quilômetros quadrados
        float PIB2 = 20000000;
        int npt2 = 8;
        float dpop2 = (float) populacao2/area2; //para densidade populacional
        float pibpc2 = (float) PIB2/populacao2; //para pib per capita
        float SuperPoder2 = (float)((populacao2 + area2 + PIB2 + npt2 + pibpc2) + (1/dpop2));

        //variável resultado
        float Resultado = SuperPoder1 > SuperPoder2;

    //entrada de dados para a carta 01
    printf("Para a carta 1: \n digite seu estado (A a H): \n");
    scanf("%1s", estado);

    printf("Para a carta 1: \n digite o codigo da carta de 01 a 04 (ex: A01): \n");
    scanf("%3s", c_carta); // Lê no máximo 3 caracteres

    printf("Para a carta 1: \n digite o nome da cidade: \n");
    scanf("%s", n_cidade); // Para nomes sem espaços. Se precisar de espaços, use fgets.

    printf("Para a carta 1: \n digite o numero da populacao da cidade: \n");
    scanf("%f", &populacao); // Lê um inteiro para a população

    printf("Para a carta 1: \n digite a area em quilometros quadrados da cidade: \n");
    scanf("%f", &area);   // Lê um float para a área

    printf("Para a carta 1: \n digite PIB da cidade: \n");
    scanf("%f", &PIB);    // Lê um float para o PIB

    printf("Para a carta 1: \n digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &npt);    // Lê um inteiro para o número de pontos turísticos

        //entrada de dados para a carta 2
        printf("Para a carta 2: \n digite seu estado (A a H): \n");
        scanf("%1s", estado2); // Lê apenas 1 caractere

        printf("Para a carta 2: \n digite o codigo da carta de 01 a 04 (ex: A01): \n");
        scanf("%3s", c_carta2); // Lê no máximo 3 caracteres

        printf("Para a carta 2: \n digite o nome da cidade: \n");
        scanf("%s", n_cidade2);

        printf("Para a carta 2: \n digite o numero da populacao da cidade: \n");
        scanf("%f", &populacao2); // Lê um inteiro para a população

        printf("Para a carta 2: \n digite a area em quilometros quadrados da cidade: \n");
        scanf("%f", &area2);   // Lê um float para a área

        printf("Para a carta 2: \n digite PIB da cidade: \n");
        scanf("%f", &PIB2);     // Lê um float para o PIB

        printf("Para a carta 2: \n digite o numero de pontos turisticos da cidade: \n");
        scanf("%d", &npt2);   // Lê um inteiro para o número de pontos turísticos

    printf("Compatação de cartas:\nA População: carta 01 venceu %lu\n", (populacao > populacao2));
    printf("Àrea: carta 01 venceu %.0f\n", (area > area2));
    printf("PIB: carta 01 venceu %.0f\n", (PIB > PIB2));
    printf("Pontos Turísticos: carta 01 venceu %d\n", (npt > npt2));
    printf("Densidade Populacional: carta 01 venceu %.0f\n", (1/dpop) > (1/dpop2));
    printf("PIB per Capita: carta 01 venceu %.0f\n", (pibpc > pibpc2));
    printf("Super Poder: carta 01 venceu %.0f\n", (SuperPoder1 > SuperPoder2));

    return 0;
}
