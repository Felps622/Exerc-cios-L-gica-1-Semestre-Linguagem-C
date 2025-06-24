/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:inverter um vetor
 *
 ***************************************************/
#include <stdio.h>

int main()
{

    // var
    float vetor[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero...: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 9; i >= 0; i--)
    {
        printf("|  %5.2f  |\n", vetor[i]);
    }

    return 0;
}