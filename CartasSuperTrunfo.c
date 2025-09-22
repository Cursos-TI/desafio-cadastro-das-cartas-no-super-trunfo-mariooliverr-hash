#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char Letra;
    char CodigodaCarta[3];
    char NomedaCidade[20];
    int Populacao;
    float AreadaCidade;
    float Pib;
    int PontosTuristicos;
    float Densidadepopulacional;
    float PIBpercapita;
    //Variáveis  da segunda carta
    char Letra2;  
    char CodigodaCarta2[3];
    char NomedaCidade2[20];
    int Populacao2;
    float AreadaCidade2;
    float Pib2;
    int PontosTuristicos2;
    float Densidadepopulacional2;
    float PIBpercapita2;

    printf("Insira as informações da primeira CARTA :\n"); //Mensagem para o usuário, solicitando que insira os dados da primeira carta
    
    printf("CARTA 01\n"); //Sequência de perguntas para o usuário, a fim de coletar as informações da carta

    printf("Letra do Estado:"); 
    scanf("%c", &Letra);

    printf("Código da Carta:");
    scanf("%s", &CodigodaCarta);

    printf("Nome da Cidade:");
    scanf("%s", &NomedaCidade);

    printf("População:");
    scanf("%d", &Populacao);

    printf("Area da Cidade:");
    scanf("%f", &AreadaCidade);
    
    printf("PIB do estado:");
    scanf("%f", &Pib);

    printf("Números de pontos Turísticos:");
    scanf("%d", &PontosTuristicos);

    Densidadepopulacional = (Populacao / AreadaCidade); // Definindo o cálculo da densidade populacional
    PIBpercapita = (float)(Pib / Populacao); // Definindo o cálculo do PIB per capita

    printf("Insira as informações da segunda CARTA:\n"); //Sequência de perguntas para o usuário, a fim de coletar as informações da segunda carta

    printf("CARTA 02\n");

    printf("Letra do Estado:");
    scanf("%c", &Letra2);

    printf("Código da Carta:");
    scanf("%s", &CodigodaCarta2);

    printf("Nome da Cidade:");
    scanf("%s", &NomedaCidade2);

    printf("População:");
    scanf("%d", &Populacao2);

    printf("Area da Cidade:");
    scanf("%f", &AreadaCidade2);
    
    printf("PIB do estado:");
    scanf("%f", &Pib2);

    printf("Números de pontos Turísticos:");
    scanf("%d", &PontosTuristicos2);

    Densidadepopulacional2 = (Populacao2 / AreadaCidade2); // Definindo o cálculo da densidade populacional
    PIBpercapita2 = (float)(Pib2 / Populacao2); // Definindo o cálculo do PIB per capita

    float superpoder1 = (float)(Populacao + AreadaCidade + PontosTuristicos + Pib + PIBpercapita + Densidadepopulacional);
    float superpoder2 = (float)(Populacao2 + AreadaCidade2 + PontosTuristicos2 +Pib2 + PIBpercapita2 + Densidadepopulacional2);

    printf ("CARTA 1:\n\n"); //Exibindo os dados da primeira carta

    printf("Estado: %c\n", Letra);
    printf("Código: %s\n", CodigodaCarta);
    printf("Nome da Cidade: %s\n", NomedaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2fkm²\n", AreadaCidade);
    printf("PIB: %.2fbilhões de reais\n", Pib);
    printf("Números de pontos Turísticos: %d\n", PontosTuristicos); 
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional);
    printf("PIB per Capita: %f Reais\n", PIBpercapita);

    printf ("CARTA 2:\n\n"); //Exibindo os dados da segunda carta

    printf("Estado: %c\n", Letra2);
    printf("Código: %s\n", CodigodaCarta2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2fkm²\n", AreadaCidade2);
    printf("PIB: %.2fbilhões de reais\n", Pib2);
    printf("Números de pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional2);
    printf("PIB per Capita: %2.f Reais\n", PIBpercapita2);

    /*
    Usei o if para comparar os valores das cartas e descobrir qual é a maior em cada categoria.
    Pois já tinha o conhecimento dessa sintaxe de if em C, e achei que seria interessante aplicar aqui.
    */
    printf("Comparações entre as cartas:\n\n"); //Exibindo o resultado das comparações entre as cartas
    
    if (printf("População: Carta 1 venceu(%d)\n",Populacao > Populacao2)){
    } else (printf("População: Carta 2 venceu(%d)\n", Populacao2 > Populacao));{
    }
    
    if (printf("Área: Carta 1 venceu(%d)\n", AreadaCidade > AreadaCidade2)){
    } else (printf("Área: Carta 2 venceu(%d)\n", AreadaCidade2 > AreadaCidade));{
    }

    if (printf("PIB: Carta 1 venceu(%d)\n", Pib > Pib2)){
    } else (printf("PIB: Carta 2 venceu(%d)\n", Pib2 > Pib));{
    }

    if (printf("Números de pontos Turísticos: Carta 1 venceu(%d)\n", PontosTuristicos > PontosTuristicos2)){
    } else (printf("Números de pontos Turísticos: Carta 2 venceu(%d)\n", PontosTuristicos2 > PontosTuristicos));{
    }

    if (printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidadepopulacional < Densidadepopulacional2)){
    } else (printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidadepopulacional2 < Densidadepopulacional));{
    }

    if (printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapita > PIBpercapita2)){
    } else (printf("PIB per Capita: Carta 2 venceu (%d)\n", PIBpercapita2 > PIBpercapita));{
    }

    if (printf ("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2)){
    } else (printf("Super Poder: Carta 2 venceu (%d)\n", superpoder2 > superpoder1));{
    }
    return 0;
}