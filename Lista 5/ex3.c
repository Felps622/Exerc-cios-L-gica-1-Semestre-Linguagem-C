/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:caucular a media aritimetica dos valores dados
 *
 ***************************************************/
#include <stdio.h>
#include <windows.h>

#define count 20



int main () {
    system ("color 0A");

    // variaveis
    float val[count];
    float somaP = 0; 
    float somaN =0;
    float medP = 0;
    float medN = 0;
    int p;
    int n;
    int i;

    for ( i = 0; i < count; i++)
    {
        printf("Digite o %d valor ....: ", i+1);
        scanf("%d", &val[i]);
    }
    for ( i = 0; i < count; i++)
    {
        if (val[i] >= 0)//positivo
        {
            somaP += val[i];
            p++;
        } else {//negativo
            somaN += val[i];
            n++;
        }
        
    }
    medP = somaP/p;
    medN = somaN/n;

    printf("|======|======\n");
    printf("|  %4d  |  %4d  |\n",medP,medN);
    printf("|      MEDIAS     |");
    


    return 0;
}