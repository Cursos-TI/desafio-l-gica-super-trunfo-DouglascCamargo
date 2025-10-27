#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Desafio SuperTrunfo logico\n");

    printf("\n");
// cartas com valores pré definidos, sem interação com usuario

    int Carta1 = 1, Carta2 = 2;
    char Estado1[50] = "Parana";
    char Estado2[50] = "Alagoas";
    char Codigo1[50] = "A1";
    char Codigo2[50] = "B2";
    char Nome_da_Cidade1[50] = "Curitiba";
    char Nome_da_Cidade2[50] = "Maceio";
    int Populaçao1 = 100;
    int Populaçao2 = 150;
    float Area1 = 200;
    float Area2 = 170; 
    float PIB1 = 19;
    float PIB2 = 18;
    int Numeros_de_pontos_turisticos1 = 30;
    int Numeros_de_pontos_turisticos2 = 60;
    float Densidade_populacional1;
    float Densidade_populacional2;
    float PIB_per_capita1;
    float PIB_per_capita2;
    int Resultado;
    int escolhadocomputador;
    int escolhadojogador1;
    int escolhadojogador2;

printf("##Jogo Super trunfo ## \n");
printf("Informações da Carta 1: \n");    

printf("Carta: %d\n", Carta1);
printf("Codigo: %s\n", Codigo1);
printf("Estado: %s\n", Estado1);
printf("Nome da cidade: %s\n", Nome_da_Cidade1);
printf("População: %d\n", Populaçao1);
printf("Area: %.2f, km²\n", Area1);
printf("PIB: %.2f, Bilhões de Reais\n", PIB1);
printf("Numero de pontos turistico: %d\n", Numeros_de_pontos_turisticos1);

    // Acressentado Densida populacional / PIB per capita e codigo de calculo

Densidade_populacional1 = (float)(Populaçao1 / Area1);
printf("Densidade populacional: %.5f\n", Densidade_populacional1);
PIB_per_capita1 = (float)(PIB1 / Populaçao1);
printf("PIB Per capita: %.5f\n", PIB_per_capita1);
    
printf("\n"); 
    //colcoado printf("\n") para deixa uma linha em branco

printf("Informações da Carta 2: \n");
printf("Carta: %d\n", Carta2);
printf("Codigo: %s\n", Codigo2);
printf("Estado: %s\n", Estado2);
printf("Nome da cidade: %s\n", Nome_da_Cidade2);
printf("População: %d\n", Populaçao2);
printf("Area: %.2f, km²\n", Area2);
printf("PIB: %.2f, Bilhões de Reais\n", PIB2);
printf("Numero de pontos turistico: %d\n", Numeros_de_pontos_turisticos2);

    // Acressentado Densida populacional / PIB per capita e codigo de calculo
   
Densidade_populacional2 = (float)(Populaçao2 / Area2);
printf("Densidade populacional: %.5f\n", Densidade_populacional2);
PIB_per_capita2 = (float)(PIB2 / Populaçao2);
printf("PIB Per capita: %.5f\n", PIB_per_capita2);

//colcoado printf("\n") para deixa uma linha em branco

printf("\n"); 
    
// inserido menu de opções interativos com o jogador 1 e 2

printf("Jogador 1: Escolha uma Opção. \n");
printf("Carta 1: Curitiba\n");
printf("Opção 1: População. \n");
printf("Opção 2: Area. \n");
printf("Opção 3: PIB. \n");
printf("Opção 4: Numros de ponto turistico. \n");
printf("Opção 5: PIB per capita. \n");
printf("Esolha:");
scanf("%d", &escolhadojogador1);

printf("\n");

printf("Jogador 2: Escolha uma Opção. \n");
printf("Carta 2: Maceio\n");
printf("Opção 1: População. \n");
printf("Opção 2: Area. \n");
printf("Opção 3: PIB. \n");
printf("Opção 4: Numros de ponto turistico. \n");
printf("Opção 5: PIB per capita. \n");
printf("Esolha:");
scanf("%d", &escolhadojogador2);

//inserido codigo Switch jogador 1

    switch (escolhadojogador1)
    {
    case 1:
        printf("Jogador 1: População %d - ", Populaçao1);
        break;
    case 2:
        printf("Jogador 1: Area %.2f- ", Area1);
        break;
    case 3:
        printf("Jogador 1: PIB %.2f- ", PIB1);
        break;
    case 4:
        printf("Jogador 1: Numeros de Pontos Turistucos %d- ", Numeros_de_pontos_turisticos1);
        break;
    case 5:
        printf("Jogador 1: PIB Per Captita %.2f- ", PIB_per_capita1);
        break;
    default:
        printf("Opção Invalida!\n");
        break;
    }

    //inserido codigo Switch jogador 2

    switch (escolhadojogador2)
    {
    case 1:
        printf("Jogador 2: População %d\n", Populaçao2);
        break;
    case 2:
        printf("Jogador 2: Area %.2f\n", Area2);
        break;
    case 3:
        printf("Jogador 2: PIB %.2f\n", PIB2);
        break;
    case 4:
        printf("Jogador 2: Numeros de Pontos Turistucos %d\n", Numeros_de_pontos_turisticos2);
        break;
    case 5:
        printf("Jogador 2: PIB Per Captita %.2f\n", PIB_per_capita2);
        break;
    }
//inserido codigo if e Else if

        if (escolhadojogador1 > escolhadojogador2)
        {
        printf("### Jogo Empatou! ###\n");
        } 
        else if ((escolhadojogador1 == 2 ) && (escolhadojogador2 == 2) ||
                (escolhadojogador1 == 3) && (escolhadojogador2 == 3) ||
                (escolhadojogador1 > 5) && (escolhadojogador2 > 5))
        {
        printf("### Parabens, Jogador 1 - Carta: Curitiba Venceu ###\n");
        } else {
        
            printf("### Parabens, Jogador 2 - Carta: Maceio Venceu! ###");
        }
        

    
    return 0;
}