/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:criar um programa que leia o vetor e imprima o maior numero e some os numeros maiores que a media
 *
 ***************************************************/
#include <stdio.h>

int main()
{

    // variaveis
    int i;
    float num[10];
    float media;
    float soma=0;
    float medM=0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %d numero....: ",i+1);
        scanf("%f", & num[i]);
    }
    

    for ( i = 0; i < 10; i++)
    {
       soma +=num[i];
        printf("| %.2f |", num[i]);
    }

    media=soma/10;
    printf("\nSoma[%.2f] Media[%.2f]\n", soma, media);

    for ( i = 0; i < 10; i++)
    {
        if (num[i] > media)
        {
            medM+=num[i];
            
        } 
        
    }
    printf("A soma dos numeros maiores que a media sao %.2f ", medM);
    

    
    

    return 0;
}