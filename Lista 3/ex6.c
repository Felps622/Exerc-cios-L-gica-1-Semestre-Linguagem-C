/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:31/01/2025
 * Objetivo.....: fazer um programa para verificar se o numero e par ou impar
 * 
 **************************************************************************************************************/
#include <stdio.h>
 
int main ( ) {

    int numero;

    printf("digite um Numero....:");
    scanf("%d", &numero);
    
    if (numero %2 == 0){
        printf("O numero e par.");

    }else{
        printf("O numero e impar.");
    }


    return 0;
}