#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    char letraestado1[10], letraestado2[10];
    char codigo1[50], codigo2[50];
    char nomecidade1[50], nomecidade2[50];
    int tur1, tur2, escolhaJogador;
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

    printf("### Menu de escolha de atributo de carta ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demógrafica\n");
    printf("Escolha o número correspondente ao atributo desejado para comparar: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador){
        case 1:
        printf("Atributo: População escolhido\n");
        break;
        case 2:
        printf("Atributo: Área escolhido\n");
        break;
        case 3:
        printf("Atributo: PIB escolhido\n");
        break;
        case 4:
        printf("Atributo: Pontos turísticos escolhido\n");
        break;
        case 5:
        printf("Atributo: Densidade demógrafica escolhido\n");
        break;
    }

    if (escolhaJogador == 1) { // População
        if (populacao1 > populacao2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: População\n");
            printf("O valor da população da cidade 1 é: %u e da cidade 2 é: %u\n", populacao1, populacao2);
            printf("A cidade 1 ganhou!\n");
        } else if (populacao1 == populacao2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: População\n");
            printf("O valor da população da cidade 1 é: %u e da cidade 2 é: %u\n", populacao1, populacao2);
            printf("Empate!\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: População\n");
            printf("O valor da população da cidade 1 é: %u e da cidade 2 é: %u\n", populacao1, populacao2);
            printf("A cidade 2 ganhou!\n");
        }
    } else if (escolhaJogador == 2) { // Área
        if (area1 > area2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Área\n");
            printf("O valor da área da cidade 1 é: %.2f e da cidade 2 é: %.2f\n", area1, area2);
            printf("A cidade 1 ganhou!\n");
        } else if (area1 == area2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Área\n");
            printf("O valor da área da cidade 1 é: %.2f e da cidade 2 é: %.2f\n", area1, area2);
            printf("Empate!\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Área\n");
            printf("O valor da área da cidade 1 é: %.2f e da cidade 2 é: %.2f\n", area1, area2);
            printf("A cidade 2 ganhou!\n");
        }
    } else if (escolhaJogador == 3) { // PIB
        if (PIB1 > PIB2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: PIB\n");
            printf("O valor do PIB da cidade 1 é: %f e da cidade 2 é: %f\n", PIB1, PIB2);
            printf("A cidade 1 ganhou!\n");
        } else if (PIB1 == PIB2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: PIB\n");
            printf("O valor do PIB da cidade 1 é: %f e da cidade 2 é: %f\n", PIB1, PIB2);
            printf("Empate!\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: PIB\n");
            printf("O valor do PIB da cidade 1 é: %f e da cidade 2 é: %f\n", PIB1, PIB2);
            printf("A cidade 2 ganhou!\n");
        }
    } else if (escolhaJogador == 4) { // Pontos turísticos
        if (tur1 > tur2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Pontos turísticos\n");
            printf("O valor dos pontos turísticos da cidade 1 é: %d e da cidade 2 é: %d\n", tur1, tur2);
            printf("A cidade 1 ganhou!\n");
        } else if (tur1 == tur2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Pontos turísticos\n");
            printf("O valor dos pontos turísticos da cidade 1 é: %d e da cidade 2 é: %d\n", tur1, tur2);
            printf("Empate!\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Pontos turísticos\n");
            printf("O valor dos pontos turísticos da cidade 1 é: %d e da cidade 2 é: %d\n", tur1, tur2);
            printf("A cidade 2 ganhou!\n");
        }
    } else if (escolhaJogador == 5) { // Densidade populacional (menor vence)
        if (densidade1 < densidade2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Densidade demógrafica\n");
            printf("O valor da Densidade demógrafica 1 é: %.2f e da cidade 2 é: %.2f\n", densidade1, densidade2);
            printf("A cidade 1 ganhou!\n");
        } else if (densidade1 == densidade2) {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Densidade demógrafica\n");
            printf("O valor da Densidade demógrafica 1 é: %.2f e da cidade 2 é: %.2f\n", densidade1, densidade2);
            printf("Empate!\n");
        } else {
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s\n", nomecidade1, nomecidade2);
            printf("O atributo utilizado foi: Densidade demógrafica\n");
            printf("O valor da Densidade demógrafica 1 é: %.2f e da cidade 2 é: %.2f\n", densidade1, densidade2);
            printf("A cidade 2 ganhou!\n");
        }
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}






