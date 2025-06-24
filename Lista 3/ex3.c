/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:31/01/2025
 * Objetivo.....: fazer um programa para apontar os valores e adicionar a variaveis apontadas
 * 
 **************************************************************************************************************/
#include <stdio.h>
int main( ) {

    int va;
    int vb;
    int vy;

  

    printf("Digite o valor de A....:");
    scanf("%d", &va);
    printf("Digite o valor de B....:");
    scanf("%d", &vb);

    if (va < vb){
        vy = vb-va;
    }else if ( vb < va) {
        vy = va-vb;
    }else{
        vy = va+vb;
    }
     printf("O valor de A e igual.....:%d\n", va);
     printf("O valor de B e igual.....:%d\n", vb);
     printf("O valor de Y e igual.....:%d\n", vy);







    return 0;
}