#include <stdio.h>

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

    //acrescentado comparacao de populacao

    printf("\n");

    printf("Carta 1: %s: %d\n", Nome_da_Cidade1, Populaçao1);
    printf("Carta 2: %s: %d\n", Nome_da_Cidade2, Populaçao2);
    if (Populaçao1 > Populaçao2){
        printf("Carta A1 %s Venceu!", Nome_da_Cidade1);
    } else {
        printf("Resultado %s Venceu!", Nome_da_Cidade2);
    }


    return 0;
}