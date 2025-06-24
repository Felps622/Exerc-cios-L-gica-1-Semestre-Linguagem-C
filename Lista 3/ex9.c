/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:05/01/2025
 * Objetivo.....:Caucular se os numeros sao multiplos ou nao.
 * 
 **************************************************************************************************************/
#include <stdio.h>
 
int main ( ) {

    int numero;

    printf("Digite um Numero....:");
    scanf("%d", &numero);
    
    if (numero %2 == 0) {
        printf("O numero é par.....:\n");
    } else{
        printf("O numero e impar...:\n");
    }

    if (numero %3 == 0) {
        printf("O numero e multiplo de tres.....\n");
    } else {
        printf("O numero nao e multiplo de tres.\n");
    }

    if (numero %5 == 0) {
        printf("O numero e multiplo de cinco.....\n");
    } else {
        printf("O numero nao e multiplo de cinco.\n");
    } 

    if (numero %7 == 0) {
        printf("O numero e multiplo de sete......\n");
    }else{
        printf("O numero nao e multiplo de sete..\n");
    }

    return 0;
}