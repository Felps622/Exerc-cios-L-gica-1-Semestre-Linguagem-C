/***********************************************
 * 
 * Autor .......:Felipe Daaniel da Silva
 * Data ........:13/05/2025
 * Objetivo ....:Matrizes
 * 
 ***********************************************/
#include <stdio.h>
#include <windows.h>

int main() {
    
    int matriz[3][4];
    int l;
    int c;
    int somal;

     for ( l = 0; l < 3; l++)
    {
        for ( c = 0; c < 4; c++)
        {
            printf("Digite o valor matriz[%d][%d] ....: ",l,c);
            scanf("%d", &matriz[l][c]);
            
            
        }
        
    }
    system("cls");
    system("color 0A");

    printf("+===============================+\n");

    for ( l = 0; l < 3; l++)
    {
        for ( c = 0; c < 4; c++)
        {
            
            printf("|  %4d  |\n",matriz[l][c]);
                somal += matriz[l][c];
        }
        printf("  %d  |",somal);
         
         somal =0;
         printf("\n");
    }
    printf("+===============================+\n");




    return 0;

}