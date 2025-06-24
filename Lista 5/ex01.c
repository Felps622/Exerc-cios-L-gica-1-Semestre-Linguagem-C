/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:Criar um programa que declare os numeros e ordene na ordem inversa
 *
 ***************************************************/
#include <stdio.h>

#define TAM 10

int main()
{

    // veriaveis
    int i;
    int num[10];
    int j;
    int temp;

    printf("BEM VINDO..!!!\n");
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %d numero...:", i + 1);
        scanf("%d", &num[i]);
    }

    printf("A ordem digitada foi a seguinte\n");
    printf("|=====|\n");

    for (i = 0; i < TAM; i++)
    {
        printf("|  %4d  |\n", num[i]);
        printf("|========|\n");
    }

    for (i = 0; i < TAM - 1; i++)
    {
        for (j = 0; j < TAM - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                // Troca os elementos de lugar
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("\nNumeros em ordem crescente\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d \n", num[i]);
    }

    printf("\nNumeros em ordem decrescente:\n");
    for (int i = TAM - 1; i >= 0; i--)
    {
        printf("%4d \n", num[i]);
    }

    return 0;
}