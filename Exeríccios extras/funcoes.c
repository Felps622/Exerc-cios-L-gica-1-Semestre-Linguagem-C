/******************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:26/05/2025
 * Objetivo ....:Funçoes
 *
 *****************************************************/
#include <stdio.h>

int imprimirQuadrado(int n)
{

    n = n+1;
    printf("|==============================|\n");
    printf("|                              |\n");
    printf("|                              |\n");
    printf("|                  %d           |\n", n);
    printf("|                              |\n");
    printf("|                              |\n");
    printf("|                              |\n");
    printf("|                              |\n");
    printf("|==============================|\n");
    return n;
}
int main()
{

    int num;

    printf("Digite um numero .....: ");
    scanf("%d", &num);

    printf("Chamou a funcao %d\n",num);
    num = imprimirQuadrado(num);
    printf("Voltei da funcao %d\n",num);

    return 0;
}