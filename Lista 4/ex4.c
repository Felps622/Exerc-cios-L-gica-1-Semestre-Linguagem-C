/*********************************************************************************
 * 
 * Autor.....:Felipe Daniel da Silva
 * Data......:07/04/25
 * Objetivo..:VErificar numeros impares de 1 ate 20
 * ******************************************************************************/
#include <stdio.h>
int main ( ) {

    int num;

    for (num = 1; num <= 20; num++)
    {
       if (num % 2 !=0){ //verificaçao se o numero e impar
        printf("O numero impares%d\n", num);
       }
    }
    





    return 0;
}