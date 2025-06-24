/*********************************************************************************
 * 
 * Autor.....:Felipe Daniel da Silva
 * Data......:07/04/25
 * Objetivo..:Tabuada
 * ******************************************************************************/
#include <stdio.h>
int main(){


    
    int cont;
    int numero;
    int inicio;
    int fim;

    printf("Qual o numero da tabuada...:");
    scanf("%d", &numero);
    printf("Digite o inicio............:");
    scanf("%d", &inicio);
    printf("Digite o fim...............:");
    scanf("%d", &fim);

    for (cont =inicio; cont<=fim; cont++) {
        printf("%d * %d = %d\n", numero,cont, numero * cont);
    }//cont uma contagem com um loop limitado na contidade selecionada ate
     //ex..:2*2=4


    return 0;
}
