#include <stdio.h>


int main() 
{
    char estado01[3], codigodacarta01[50], cidade01[50];
    int pturistico01, populacao01;
    float area01, pib01;  //VARIAVEIS DEFINIDAS PARA APRIMEIRA CARTA! (CARTA 1).

    char estado02[3], codigodacarta02[50], cidade02[50];
    int pturistico02, populacao02;
    float area02, pib02;  //VARIAVEIS DEFINIDAS PARA A SEGUNDA CARTA! (CARTA 2).

    printf("------------------------------------\n");
    printf("************");
    printf("SUPER TRUNFO");
    printf("************\n");
    printf("------------------------------------\n\n");

    printf("Adiçione as seguintes Informações abaixo;\n\n");
    
    printf("CARTA 1\n");
    printf("*******");
    
    //ABAIXO A PRIMEIRA REQUIÇÃO DOS DADOS PARA O USUARIO

    printf("\nInicial do Estado: ");
    scanf("%c", estado01);

    printf("\nCodigo da carta: ");
    scanf("%s", codigodacarta01);

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

    //FINAL DA PRIMEIRA REQUISIÇÃO

    printf("\n\n==================================\n\n" );
    printf("\nMAgora digite a segunda carta!\n\n");

    //INICIO DA SEGUNDA REQUISIÇÃO

     printf("CARTA 2\n");
     printf("*******\n\n");
    
    

    printf("Inicial do Estado: ");
    scanf("%c", estado02);

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
    //FINAL DA ENTRADA DE DADOS
    printf("\n\nInformações Inseridas com sucesso\n\n!");


    //IMPRESSÃO DE DADOS INSERIDOS NA TELA
    printf("***************");
    printf("DADOS INSERIDOS");
    printf("***************\n\n");

    printf("CARTA 1\n");
    printf("*******");

    printf("\n\nInicial do estado: %s",estado01);
    printf("\nCodigo: %s", codigodacarta01);
    printf("\nNome da Cidade: %s", cidade01);
    printf("\nNumero de Habitantes: %d", populacao01);
    printf("\nÁrea: %f Km²", area01);
    printf("\nPIB: %f Milhões(Produto INTERNO Bruto.)", pib01);
    printf("\nPontos Turisticos na Cidade: %d", pturistico01);
    printf("\n\n=============================================================\n\n");


    printf("CARTA 2\n");
    printf("*******\n");

    printf("\n\nInicial do estado: %s",estado02);
    printf("\nCodigo:  %s", codigodacarta02);
    printf("\nNome da Cidade: %s", cidade02);
    printf("\nNumero de Habitantes: %d", populacao02);
    printf("\nÁrea: %f Km²", area02);
    printf("\nPIB: %f Milhões(Produto INTERNO Bruto.)", pib02);
    printf("\nExistem  %d Pontos Turisticos na Cidade\n\n", pturistico02);



    return 0;
}



