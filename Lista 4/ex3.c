/*****************************************************************
 * 
 * Autor.....:Fleipe Daniel da Silva
 * Data......:08/04/2025
 * Objetivo..:somar todos os numeros pares de 1 ate 500
 * 
 ****************************************************************/
#include <stdio.h>
int main (){

    int cont;
    int soma = 0;
    for (cont = 1; cont <= 500; cont++)
    {
        if (cont %2 == 0){
            soma = soma + cont;
            printf("%d  + %d = %d\n",cont,cont,cont + cont);
        }
    }
    printf("A soma dos pares e de %d\n", soma);
    




    return 0;
}