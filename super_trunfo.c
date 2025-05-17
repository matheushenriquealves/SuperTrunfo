#include <stdio.h>

int main(){

    char letraestado[10]; //letra referente ao estado
    char codigo[50]; //codigo da carta
    char nomecidade[50]; //nome da cidade
    int populacao; //quantidade de habitantes
    float area; //area total em quilometros quadrados
    float PIB; //produto interno bruto da cidade
    int tur; //quantidade de pontos turisticos

    printf("Escolha qual letra da carta deseja: "); //texto explicando o que é pra ser feito
    scanf("%s", letraestado); //input para escolher a letra que sera referente ao estado

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

    printf("Carta 1: \nEstado:%s\nCodigo:%s\nNome da cidade:%s\nPopulacao:%d\nArea:%g\nPIB:%g\nPontos turisticos:%d\n",
        letraestado, codigo, nomecidade, populacao, area, PIB, tur); //informacoes da primeira carta

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

    printf("Carta 2: \nEstado:%s\nCodigo:%s\nNome da cidade:%s\nPopulacao:%d\nArea:%g\nPIB:%g\nPontos turisticos:%d\n",
        letraestado, codigo, nomecidade, populacao, area, PIB, tur); //informacoes da segunda carta

    return 0;
}