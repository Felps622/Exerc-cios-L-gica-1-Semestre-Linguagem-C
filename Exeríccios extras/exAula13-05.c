/*********************************************************
 *
 * Autor ......:Felipe Daniel da Silva
 * Data .......:13/05/2025
 * Objetivo ...:Exercicio aula
 *
 *********************************************************/
#include <stdio.h>

int main()
{

    // var controles
    int i;
    int l;
    // numbers
    int vet[20];
    int s = 0;

    for (i = 0; i < 20; i++)
    {
        printf("Digite o Valor do vet [%d] ....: ", i);
        scanf("%d", &vet[i]);
    }

    l = 19;
    for (i = 0; i < 10; i++)
    {
        printf("%d - %4d\n",i, vet[i]);
        s = s + (vet[i] - vet[l]);
        l--;
    }
    printf("A soma dos elementos e ..: %d", s);

    return 0;
}