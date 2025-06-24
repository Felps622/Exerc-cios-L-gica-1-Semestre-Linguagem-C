/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:21/05/2025
 * Objetivo ....:CRIAR UMA MATRIZ E IMPRIMIR A DIAGONAL PRIMARIA E SECUNDARIA
 * 
 ***************************************************/
#include <stdio.h>

int main( ) {

    int matriz[4][4] ={{11,22,33,44},
                       {99,88,77,66},
                       {21,43,65,87},
                       {10,20,30,40}};
    int i,j;

    printf("|========|========|========|========|\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("|  %4d  ",matriz[i][j]);
        }
        printf("|\n");
    }
    printf("|========|========|========|========|\n");

    printf("Diagonal primaria:\n");
    printf("|======|\n");
    j=0;
    for ( i = 0; i < 4; i++)
    {
        printf("|  %d  |\n",matriz[i][j]);
        j++;
    }
    
    printf("Diagonal secundaria:\n");
    printf("|======|\n");
    j = 3;
    for (i = 0; i < 4; i++)
    {
        printf("|  %d  |\n", matriz[i][j]);
        j--;
    }
   
    
    


    return 0;
}