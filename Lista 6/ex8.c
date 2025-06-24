/*
Autor .....: Felipe Daniel da Silva
Data .......: 31/05/2025
Objetivo ...:
*/
#include <stdio.h>

// soma dos vetores
int somaVetores(int vetor1[10], int vetor2[10])
{

    // variavel
    int i;
    int soma = 0;

    for (i = 0; i < 10; i++)
    {
        soma += vetor1[i] + vetor2[i];
    }
    return soma;
}

// programa principal
int main()
{

    // variaveis
    int vetor1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int vetor2[10] = {11, 21, 31, 41, 51, 61, 71, 81, 91, 101};

    int resultado;

    resultado = somaVetores(vetor1, vetor2);

    printf("Os dois vetores somados dao o total de %d ", resultado);

    return 0;
}