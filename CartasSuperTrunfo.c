#include <stdio.h>


int main() 
{
    char estado01[2], codigodacarta01[50], cidade01[50];
    int pturistico01, populacao01;
    float area01, pib01;  //VARIAVEIS DEFINIDAS PARA APRIMEIRA CARTA! (CARTA 1).
    float dempo01;  // TIPO DE CONVERSÃO IMPLICITA PARA FLOAT
    float ppc01;

    
    printf("************************");
    printf("\nSUPER TRUNFO");
    printf("\n************************\n\n");
   

    printf("***********************ADIÇIONE AS SEGUINTES INFORMAÇÕES ABAIXO***********************\n\n");
    
    printf("CARTA 1\n");
    printf("*******\n");
    
    //ABAIXO A PRIMEIRA REQUIÇÃO DOS DADOS PARA O USUARIO

    printf("Inicial do Estado: ");
    scanf("%s", estado01);

    printf("\nCodigo da carta: ");
    scanf("%s", codigodacarta01);

    printf("\nNome da Cidade: ");
    scanf("%s", cidade01);

    printf("\nNumero da população (sem pontos e virgulas): ");
    scanf("%d", &populacao01);

    printf("\nArea Km²: ");
    scanf("%f", &area01);

    printf("\nPIB Nacional: ");
    scanf("%f", &pib01);

    printf("\nQuantidade de pontos turisticos: ");
    scanf("%d", &pturistico01);
    

    dempo01 = populacao01 / area01;
    ppc01 = pib01 / populacao01;

    //FINAL DA PRIMEIRA REQUISIÇÃO

    printf("\n\n==================================\n\n" );
    printf("\nAGORA DIGITE A SEGUNDA CARTA!\n");

    //INICIO DA SEGUNDA REQUISIÇÃO

    char estado02[2], codigodacarta02[50], cidade02[50];
    int pturistico02, populacao02;
    float area02, pib02, dempo02;  //VARIAVEIS DEFINIDAS PARA A SEGUNDA CARTA! (CARTA 2).
   

    printf("CARTA 2\n");
    printf("*******\n");
    

    printf("Incial do estado: ");
    scanf("%s", estado02);
    

    printf("\nCodigo da carta: ");
    scanf("%s", codigodacarta02);

    printf("\nNome da Cidade: ");
    scanf("%s", cidade02);

    printf("\nNumero da população sem pontos e virgulas: ");
    scanf("%d", &populacao02);

    printf("\nArea Km²: ");
    scanf("%f", &area02);

    printf("\nPIB Nacional: ");
    scanf("%f", &pib02);

    printf("\nQuantidade de pontos turisticos: ");
    scanf("%d", &pturistico02);
    //FINAL DA ENTRADA DE DADOS
    printf("\n\nInformações Inseridas com sucesso\n\n");
    printf("========================================================================");

    dempo02 = populacao02 / area02;  // TIPO DE CONVERSÃO EXPLICITA PARA FLOAT
    float ppc02 = (float) pib02 / populacao02;

    //IMPRESSÃO DE DADOS INSERIDOS NA TELA
    printf("***************\n");
    printf("DADOS INSERIDOS");
    printf("***************\n\n");

    printf("CARTA 1\n");
    printf("*******\n\n");

    printf("Inicial do estado: %s", estado01);
    printf("\nCodigo: %s%s", estado01, codigodacarta01);
    printf("\nNome da Cidade: %s", cidade01);
    printf("\nNumero de Habitantes: %d", populacao01);
    printf("\nÁrea: %f Km²", area01);
    printf("\nPIB: %f Milhões de reais.", pib01);
    printf("\nExistem  %d Pontos Turisticos na Cidade.", pturistico01);
    printf("\nDensidade Populacional: %.2f", dempo01);
    printf("\nPib per Capita: %f", ppc01);

    printf("\n\n=============================================================\n\n");


    printf("CARTA 2\n");
    printf("*******\n");

    printf("\nInicial do estado: %s", estado02);
    printf("\nCodigo:  %s%s", estado02, codigodacarta02);
    printf("\nNome da Cidade: %s", cidade02);
    printf("\nNumero de Habitantes: %d", populacao02);
    printf("\nÁrea: %f Km²", area02);
    printf("\nPIB: %f Milhões de Reais.", pib02);
    printf("\nExistem  %d Pontos Turisticos na Cidade", pturistico02);
    printf("\nDensidade Populacional: %.2f", dempo02);
    printf("\nPib per Capita: %f\n\n", ppc02);



    //INICIO DA COMPARAÇAO DE CARTAS.
   
    printf("******************COMPARAÇÃO DE ATRIBUTOS******************\n\n");

    printf("Digite o numero do atributo nas cartas a serem comparados!\n");
    printf("1-habitantes 2-area 3-Pib 4-Pturisticos 5-densidadep:");

    int numatributo;
    scanf("%d", &numatributo);

    switch (numatributo)
    {
    case 1:
        printf("Atributo a ser verificado; POPULAÇÃO! \n\n");
        printf("Verificando...\n\n");


        if (populacao01 == populacao02)
        {
            printf("EMPATADO!");
            
        }
        else if (populacao01 > populacao02){
            printf("\nCarta1 GANHOU!");
            
        }
        else{
            printf("\nCarta2 GANHOU!\n");
            
        }
        
        printf("\nComparação entre as Cidades: %s x %s ", cidade01, cidade02);
        printf("\nAtributo usado na comparação: POPULAÇÂO");
        printf("\nValores dos atributos: %d x %d\n\n", populacao01, populacao02);

        break;

    case 2:
    printf("Atributo a ser verificado; AREA! \n\n");
    printf("Verificando...\n\n");


        if (area01 == area02)
        {
            printf("EMPATADO!");
            
        }
        else if (area01 > area02){
            printf("\nCarta1 GANHOU!");
            
        }
        else{
            printf("\nCarta2 GANHOU!\n");
            
        }
        
        printf("\nComparação entre as Cidades: %s x %s ", cidade01, cidade02);
        printf("\nAtributo usado na comparação: AREA");
        printf("\nValores dos atributos: %f x %f\n\n", area01, area02);
    break;

     case 3:
    printf("Atributo a ser verificado; PIB! \n\n");
    printf("Verificando...\n\n");


        if (pib01 == pib02)
        {
            printf("EMPATADO!");
            
        }
        else if (pib01 > pib02){
            printf("\nCarta1 GANHOU!");
            
        }
        else{
            printf("\nCarta2 GANHOU!\n");
            
        }
        
        printf("\nComparação entre as Cidades: %s x %s ", cidade01, cidade02);
        printf("\nAtributo usado na comparação: PIB");
        printf("\nValores dos atributos: %f x %f\n\n", pib01, pib02);
    break; 

    case 4:
    printf("Atributo a ser verificado; PTURISTICO! \n\n");
    printf("Verificando...\n\n");


        if (pturistico01 == pturistico02)
        {
            printf("EMPATADO!");
            
        }
        else if (pturistico01 > pturistico02){
            printf("\nCarta1 GANHOU!");
            
        }
        else{
            printf("\nCarta2 GANHOU!\n");
            
        }
        
        printf("\nComparação entre as Cidades: %s x %s ", cidade01, cidade02);
        printf("\nAtributo usado na comparação: P-TURISTICOS");
        printf("\nValores dos atributos: %d x %d\n\n", pturistico01, pturistico02);
    break; 

    case 5:
    printf("Atributo a ser verificado; DENSIDADEPOPULAÇIONAL! \n\n");
    printf("Verificando...\n\n");


        if (dempo01 == dempo02)
        {
            printf("EMPATADO!");
            
        }
        else if (dempo01 < dempo02){
            printf("\nCarta1 GANHOU!");
            
        }
        else{
            printf("\nCarta2 GANHOU!\n");
            
        }
        
        printf("\nComparação entre as Cidades: %s x %s ", cidade01, cidade02);
        printf("\nAtributo usado na comparação: DENSIDADE POPULACIONAL");
        printf("\nValores dos atributos: %f x %f\n\n", dempo01, dempo02);

        printf("******************FIM DA COMPARAÇÃO******************\n\n");
    break;


    default:
        break;
    }

   
}



