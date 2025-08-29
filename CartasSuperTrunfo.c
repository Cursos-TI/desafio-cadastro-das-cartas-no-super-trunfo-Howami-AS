#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() 
{
    char estado01[1], codigodacarta01[50], cidade01[50];
    int pturistico01, populacao01;
    float area01, pib01;  //VARIAVEIS DEFINIDAS PARA APRIMEIRA CARTA! (CARTA 1).

    char estado02[1], codigodacarta02[50], cidade02[50];
    int pturistico02, populacao02;
    float area02, pib02;  //VARIAVEIS DEFINIDAS PARA A SEGUNDA CARTA! (CARTA 2).

    printf("------------------------------------\n");
    printf("************");
    printf("SUPER TRUNFO");
    printf("************\n");
    printf("------------------------------------\n\n");

    printf("Adiçione as seguintes Informações abaixo;\n\n");
    
    printf("CARTA 1");
    printf("*******");
    
    

    printf("\n\nInicial do Estado: ");
    scanf("%c", estado01);

    printf("\nCodigo da carta: ");
    scanf("%c %s", estado01, codigodacarta01);

    printf("\nNome da Cidade: ");
    scanf("%s", cidade01);

    printf("\nNumero da população: ");
    scanf("%d", &populacao01);

    printf("\nArea Km²: ");
    scanf("%f", &area01);

    printf("\nPIB Nacional: ");
    scanf("%f", &pib01);

    printf("\nQuantidade de pontos turisticos: ");
    scanf("%d", &pturistico01);

    
    printf("\n\n*********************************************************************************\n\n");
    printf("Agora digite a segunda carta!\n\n");

     printf("CARTA 2\n");
     printf("*******");
    
    

    printf("\n\nInicial do Estado: ");
    scanf("%s", estado02);

    printf("\nCodigo da carta: ");
    scanf("%s", codigodacarta02);

    printf("\nNome da Cidade: ");
    scanf("%s", cidade02);

    printf("\nNumero da população: ");
    scanf("%d", &populacao02);

    printf("\nArea Km²: ");
    scanf("%f", &area02);

    printf("\nPIB Nacional: ");
    scanf("%f", &pib02);

    printf("\nQuantidade de pontos turisticos: ");
    scanf("%d", &pturistico02);

    printf("\n\nInformações Inseridas com sucesso\n\n!");

    printf("***************");
    printf("DADOS INSERIDOS");
    printf("***************\n\n");

    printf("CARTA 1\n");
    printf("*******");

    printf("\n\nInicial do estado: %s",estado01);
    printf("\nCodigo: %c %s", estado01, codigodacarta01);
    printf("\nNome da Cidade: %s", &cidade01);
    printf("\nNumero de Habitantes: %d", &populacao01);
    printf("\nÁrea: %f Km²", &area01);
    printf("\nPIB: %f Milhões(Produto iNTERNO Bruto.)", &pib01);
    printf("\nPontos Turisticos na Cidade: %d", &pturistico01);
    printf("\t");





    return 0;
}
