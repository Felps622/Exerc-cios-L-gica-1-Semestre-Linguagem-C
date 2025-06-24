/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:criar dois vetores e exibir eles na tela
 *
 ***************************************************/
#include <stdio.h>

int main () {

    // var
    int a[15];
    int b[15];
    int i;

    for ( i = 0; i < 15; i++)
    {
        printf("Digite o %d numero....:", i+1);
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 15; i++)
    {
        b[i]= a[i]*a[i];
    }

    printf("Vetor a.:\n");

    for ( i = 0; i < 15; i++)
    {
        printf("A[%d]:%d\n",i ,a[i]);
    }

    printf("Vetor b.:\n");
    for ( i = 0; i < 15; i++)
    {
        printf("A[%d]:%d\n",i ,b[i]);
    }
    
    
    
    
    


    return 0;

}