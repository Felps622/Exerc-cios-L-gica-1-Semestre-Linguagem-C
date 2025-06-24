/***********************************************************************
 * 
 * Autor.....:Felipe Daniel da Silva
 * Data......:26/03/2025
 * Objetivo..:Programa ler idade da pessoa e imprimir anos em dias.
 * 
 ***********************************************************************/
#include <stdio.h>
 
int main () {
    //Variaveis
    int anos;
    int meses;
    
    // interaçao
    printf("Digite quantos anos voce tem...:");
    scanf("%d", &anos);

    anos = anos*365;
    meses = anos/30;

    //saida de dados
    printf("\n=================================\n");
    printf("Voce tem %d dais de vida\n", anos);
    printf("Voce tem %d meses de vida",meses);



    return 0;
}