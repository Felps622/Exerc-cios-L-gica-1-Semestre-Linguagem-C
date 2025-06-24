/***********************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:Invertendo matrises e imprimindo
 *
 **********************************************************/
#include <stdio.h>

int main()
{

    // variaveis
    int l;
    int c;
    // int matriz[3][3];
    int matriz[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {12, 22, 32, 42},
        {16, 26, 36, 46},
    };

    l = 3;
    printf("|======|\n");
    for (c = 0; c < 4; c++)
    {
        printf("|  %d  |\n", matriz[l][c]);
        l--;
    }

    printf("|======|\n");
    c = 3;
    for (l = 0; l < 4; l++)
    {
        printf("|  %d  |\n", matriz[l][c]);
        c--;
    }
    printf("|======|\n");
    printf("Ordenado\n");
    printf("|========|========|========|========|\n");
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("|  %4d  ", matriz[l][c]);
        }
        printf("|\n");
    }
    printf("|========|========|========|========|\n");

    printf("Invertido\n");
    printf("|========|========|========|========|\n");
    for (l = 3; l >= 0; l--)
    {
        for (c = 3; c >= 0; c--)
        {
            printf("|  %4d  ", matriz[l][c]);
        }
        printf("|\n");
    }
    printf("|========|========|========|========|\n");

    printf("Coluna virou linha.\n");
    printf("|========|========|========|========|\n");

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("|  %4d  ", matriz[c][l]);
        }
        printf("|\n");
    }
    printf("|========|========|========|========|\n");
    return 0;
}