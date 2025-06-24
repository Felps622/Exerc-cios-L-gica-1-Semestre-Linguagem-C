/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:31/01/2025
 * Objetivo.....: fazer um programa com os descontos baseadas nas idades apontadas
 * 
 **************************************************************************************************************/
#include <stdio.h>
int main( ) {

    int A;
    int B;
    int C;

    printf("Digite o primeiro numero..:");
    scanf("%d", &A);
    printf("Digite o segundo numero...:");
    scanf("%d", &B);
    printf("Digite o terceiro numero..:");
    scanf("%d", &C);
      

    if ((A > B)  && (A > C)) {
        printf("O maior numero e......:%d\n", A);

    }else if((B > A) && (B > C)) {
        printf("O maior numero e.......:%d\n", B);
    }else{
        printf("O maior numero e.......:%d\n", C);
    }


    if ((A < B)  && (A < C)) {
        printf("O menor numero e......:%d\n", A);

    }else if((B < A) && (B < C)) {
        printf("O menor numero e.......:%d\n", B);
    }else{
        printf("O menor numero e.......:%d\n", C);
    }




    return 0;
}