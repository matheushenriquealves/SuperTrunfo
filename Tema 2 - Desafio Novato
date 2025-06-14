#include <stdio.h>

int main(){

    char letraestado1[10], letraestado2[10];
    char codigo1[50], codigo2[50];
    char nomecidade1[50], nomecidade2[50];
    int tur1, tur2;
    float area1, PIB1, densidade1, pibpercapita1, area2, PIB2, densidade2, pibpercapita2;
    unsigned int populacao1, populacao2;

    printf("Escolha qual letra da carta deseja: ");
    scanf("%s", letraestado1);

    printf("Insira o codigo da carta(A letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);

    printf("Insira o numero de habitantes da populacao: ");
    scanf("%u", &populacao1);

    printf("Digite a area da cidade em KM²:");
    scanf("%f", &area1);

    printf("Digite o PIB(Produto interno bruto) da cidade: ");
    scanf("%f", &PIB1);

    printf("Quantos pontos turisticos a cidade tem: ");
    scanf("%d", &tur1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = PIB1 / populacao1;
    float SuperPoder1 = populacao1 + area1 + PIB1 + tur1 + (1.0 / densidade1);

    printf("Carta 1: \nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulacao: %u\nArea: %f km²\nPIB: %f bilhoes de reais\nPontos turisticos: %d\n",
        letraestado1, codigo1, nomecidade1, populacao1, area1, PIB1, tur1);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f reais\n", densidade1, pibpercapita1);
    printf("A carta A acumulou %.2f de Super Poder\n", SuperPoder1);

    printf("Escolha a segunda letra da carta: ");
    scanf("%s", letraestado2);

    printf("Insira o codigo da carta(A letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("Insira o numero de habitantes da populacao: ");
    scanf("%u", &populacao2);

    printf("Digite a area da cidade em KM²:");
    scanf("%f", &area2);

    printf("Digite o PIB(Produto interno bruto) da cidade: ");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos a cidade tem: ");
    scanf("%d", &tur2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = PIB2 / populacao2;
    float SuperPoder2 = populacao2 + area2 + PIB2 + tur2 + (1.0 / densidade2);

    printf("Carta 2: \nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulacao: %u\nArea: %f km²\nPIB: %f bilhoes de reais\nPontos turisticos: %d\n",
        letraestado2, codigo2, nomecidade2, populacao2, area2, PIB2, tur2);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f reais\n", densidade2, pibpercapita2);
    printf("A carta B acumulou %.2f de Super Poder\n", SuperPoder2);

    printf("Comparação de Cartas: Carta A - 1 verdadeiro Carta B - 0 falso \n");//Comparacao das cartas com 0 ou 1 para verdadeiro ou falso
    printf("Qual carta venceu em população? %d\n", (populacao1 > populacao2));
    printf("Qual carta venceu em área? %d\n", (area1 > area2));
    printf("Qual carta venceu em PIB? %d\n", (PIB1 > PIB2));
    printf("Qual carta venceu em pontos turisticos? %d\n", (tur1 > tur2));
    printf("Qual carta venceu em densidade populacional? %d\n", (densidade1 < densidade2));
    printf("Qual carta venceu em PIB per capita? %d\n", (pibpercapita1 > pibpercapita2));
    printf("Qual carta teve mais Super Poder? %d\n", (SuperPoder1 > SuperPoder2));


    if ( populacao1 > populacao2){ //Comparacao entre a populacao das duas cartas usando if else
        printf("A carta da cidade 1 - %s ganhou!, com %d de habitantes a carta 1 tem uma população maior que a carta da cidade 2 - %s que tem %d habitantes", nomecidade1, populacao1, nomecidade2, populacao2);
    } else{
        printf("A carta da cidade 1 - %s perdeu!, com %d de habitantes a carta 1 tem uma população menor que a carta da cidade 2 - %s que tem %d habitantes", nomecidade1, populacao1, nomecidade2, populacao2);
    }
    return 0;
}
