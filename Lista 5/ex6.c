/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:criar um convertedor de graus C para F
 *
 ***************************************************/
#include <stdio.h>

int main () {

    //variaveis
    int i;
    float C[25];
    float F[25];

    for ( i = 0; i < 25; i++)
    {
        printf("Digide o %d numero que quer converter...: ", i+1);
        scanf("%f", &C[i]);
    }
    

    printf("|=========|=========|\n");
    printf("|    C    |    F    |\n");
    printf("|---------|---------|\n");
    for ( i = 0; i < 25; i++)
    {
        F[i]=(C[i]*9/5)+32;
        printf("|  %5.1f  |  %5.1f  |\n", C[i],F[i]);
    }
    printf("|=========|=========|\n");


    return 0;
}