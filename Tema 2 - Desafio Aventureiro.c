#include <stdio.h>

int main(){

    char letraestado[10];
    char codigo[50];
    char nomecidade[50];
    int populacao, tur;
    float area, PIB, densidade, pibpercapita;

    printf("Escolha qual letra da carta deseja: ");
    scanf("%s", letraestado);

    printf("Insira o codigo da carta(A letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade);

    printf("Insira o numero de habitantes da populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em KM²:");
    scanf("%f", &area);

    printf("Digite o PIB(Produto interno bruto) da cidade: ");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos a cidade tem: ");
    scanf("%d", &tur);

    densidade = populacao / area;
    pibpercapita = PIB / populacao;

    printf("Carta 1: \nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f km²\nPIB: %f bilhões de reais\nPontos turisticos: %d\n",
        letraestado, codigo, nomecidade, populacao, area, PIB, tur);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f reais\n", densidade, pibpercapita);

    printf("Escolha a segunda letra da carta: ");
    scanf("%s", letraestado);

    printf("Insira o codigo da carta(A letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade);

    printf("Insira o numero de habitantes da populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em KM²:");
    scanf("%f", &area);

    printf("Digite o PIB(Produto interno bruto) da cidade: ");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos a cidade tem: ");
    scanf("%d", &tur);

    densidade = populacao / area;
    pibpercapita = PIB / populacao;

    printf("Carta 2: \nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f km²\nPIB: %f bilhões de reais\nPontos turisticos: %d\n",
        letraestado, codigo, nomecidade, populacao, area, PIB, tur);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f reais\n", densidade, pibpercapita);

    return 0;
}
