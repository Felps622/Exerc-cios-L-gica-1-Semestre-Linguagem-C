/*
Autor .....: Felipe Daniel da Silva
Data .......: 31/05/2025
Objetivo ...:Faça uma função que recebe um vetor X de 30 elementos inteiros, por referência, e retorna, também por
referência, dois vetores A e B. O vetor A deve conter os elementos pares de X e o vetor B, os elementos
ímpares.
*/
#include <stdio.h>

// validacao dos vetores impar ou par
void especificacaoVet(int vetorX[])
{

    int vetA[30];//pares
    int vetB[30];//impares
    int i;
    int contaA = 0, contaB = 0;
    for (i = 0; i < 30; i++)
    {
        if (vetorX[i] % 2 == 0)//positivo
        {
            vetA[contaA] = vetorX[i];
            contaA++;

        }else {
            vetB[contaB] = vetorX[i];
            contaB++;
        }
    }
    //saida de dados
    printf("Vetor A pares\n");
    for ( i = 0; i < contaA; i++)
    {
        printf("| %4d |\n",vetA[i]);
    }

      printf("Vetor B impares\n");
    for ( i = 0; i < contaB; i++)
    {
        printf("| %4d |\n",vetB[i]);
    }
}

// programa principal
int main()
{

    // variavel
    int vetorX[30] = {
        2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, // 15 pares
        1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29   // 15 impares
    };
    

    especificacaoVet(vetorX);

    
    

    return 0;
}