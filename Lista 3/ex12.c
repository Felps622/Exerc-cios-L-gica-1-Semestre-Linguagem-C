/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:06/01/2025
 * Objetivo.....:definir se o numero e inteiro ou nao
 * 
 **************************************************************************************************************/
#include <stdio.h>
int main ( ) {
 
    int numero;

    printf("Digite um valor.....:");
    scanf("%d", &numero);
    
    if ( numero% 2 == 0) {
        printf("O numero nao e inteiro.");
    } else {
        printf("O numero e inteiro");
}


    return 0;
}