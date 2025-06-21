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
    printf("Você deverá escolher duas opções para serem comparadas!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demógrafica\n");
    printf("Escolha o primeiro número correspondente ao atributo desejado para comparar: ");
    scanf("%d", &escolhaJogador);

    // Exibe o atributo escolhido
    switch (escolhaJogador) {
        case 1: printf("Atributo: População escolhido\n"); break;
        case 2: printf("Atributo: Área escolhido\n"); break;
        case 3: printf("Atributo: PIB escolhido\n"); break;
        case 4: printf("Atributo: Pontos turísticos escolhido\n"); break;
        case 5: printf("Atributo: Densidade demográfica escolhido\n"); break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Novo menu sem o atributo já escolhido
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    if (escolhaJogador != 1) printf("1. População\n");
    if (escolhaJogador != 2) printf("2. Área\n");
    if (escolhaJogador != 3) printf("3. PIB\n");
    if (escolhaJogador != 4) printf("4. Pontos turísticos\n");
    if (escolhaJogador != 5) printf("5. Densidade demográfica\n");

    int escolhaSegundo;
    printf("Escolha o número do segundo atributo: ");
    scanf("%d", &escolhaSegundo);

    if (escolhaSegundo == escolhaJogador || escolhaSegundo < 1 || escolhaSegundo > 5) {
        printf("Atributo inválido ou repetido!\n");
        return 1;
    }

    // Exibe o segundo atributo escolhido
    switch (escolhaSegundo) {
        case 1: printf("Segundo atributo: População\n"); break;
        case 2: printf("Segundo atributo: Área\n"); break;
        case 3: printf("Segundo atributo: PIB\n"); break;
        case 4: printf("Segundo atributo: Pontos turísticos\n"); break;
        case 5: printf("Segundo atributo: Densidade demográfica\n"); break;
    }
    
    // Comparação do primeiro atributo escolhido
printf("\nResultado do primeiro atributo:\n");
switch (escolhaJogador) {
    case 1: // População
        printf("População - Cidade 1: %u | Cidade 2: %u\n", populacao1, populacao2);
        break;
    case 2: // Área
        printf("Área - Cidade 1: %.2f | Cidade 2: %.2f\n", area1, area2);
        break;
    case 3: // PIB
        printf("PIB - Cidade 1: %.2f | Cidade 2: %.2f\n", PIB1, PIB2);
        break;
    case 4: // Pontos turísticos
        printf("Pontos turísticos - Cidade 1: %d | Cidade 2: %d\n", tur1, tur2);
        break;
    case 5: // Densidade demográfica (menor vence)
        printf("Densidade demográfica - Cidade 1: %.2f | Cidade 2: %.2f\n", densidade1, densidade2);
        break;
    default:
        printf("Atributo inválido!\n");
}

// Comparação do segundo atributo escolhido
printf("\nResultado do segundo atributo:\n");
switch (escolhaSegundo) {
    case 1: // População
        printf("População - Cidade 1: %u | Cidade 2: %u\n", populacao1, populacao2);
        break;
    case 2: // Área
        printf("Área - Cidade 1: %.2f | Cidade 2: %.2f\n", area1, area2);
        break;
    case 3: // PIB
        printf("PIB - Cidade 1: %.2f | Cidade 2: %.2f\n", PIB1, PIB2);
        break;
    case 4: // Pontos turísticos
        printf("Pontos turísticos - Cidade 1: %d | Cidade 2: %d\n", tur1, tur2);
        break;
    case 5: // Densidade demográfica (menor vence)
        printf("Densidade demográfica - Cidade 1: %.2f | Cidade 2: %.2f\n", densidade1, densidade2);
        break;
    default:
        printf("Atributo inválido!\n");
}

// Soma dos valores dos dois atributos para cada cidade
float valor1_cidade1 = 0, valor1_cidade2 = 0;
float valor2_cidade1 = 0, valor2_cidade2 = 0;

// Primeiro atributo
switch (escolhaJogador) {
    case 1: valor1_cidade1 = populacao1; valor1_cidade2 = populacao2; break;
    case 2: valor1_cidade1 = area1;      valor1_cidade2 = area2;      break;
    case 3: valor1_cidade1 = PIB1;       valor1_cidade2 = PIB2;       break;
    case 4: valor1_cidade1 = tur1;       valor1_cidade2 = tur2;       break;
    case 5: valor1_cidade1 = densidade1; valor1_cidade2 = densidade2; break;
}

// Segundo atributo
switch (escolhaSegundo) {
    case 1: valor2_cidade1 = populacao1; valor2_cidade2 = populacao2; break;
    case 2: valor2_cidade1 = area1;      valor2_cidade2 = area2;      break;
    case 3: valor2_cidade1 = PIB1;       valor2_cidade2 = PIB2;       break;
    case 4: valor2_cidade1 = tur1;       valor2_cidade2 = tur2;       break;
    case 5: valor2_cidade1 = densidade1; valor2_cidade2 = densidade2; break;
}

// Para densidade demográfica, quanto menor melhor, então invertemos o valor (usamos o inverso)
if (escolhaJogador == 5) {
    valor1_cidade1 = -densidade1;
    valor1_cidade2 = -densidade2;
}
if (escolhaSegundo == 5) {
    valor2_cidade1 = -densidade1;
    valor2_cidade2 = -densidade2;
}

float soma_cidade1 = valor1_cidade1 + valor2_cidade1;
float soma_cidade2 = valor1_cidade2 + valor2_cidade2;

printf("\nSoma dos dois atributos:\n");
printf("Cidade 1: %.2f\n", soma_cidade1);
printf("Cidade 2: %.2f\n", soma_cidade2);

if (soma_cidade1 > soma_cidade2) {
    printf("A cidade 1 venceu a rodada!\n");
} else if (soma_cidade1 < soma_cidade2) {
    printf("A cidade 2 venceu a rodada!\n");
} else {
    printf("Empate na rodada!\n");
}

    return 0;
}






