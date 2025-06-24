/*********************************************************************************
 *
 * Autor.....:Felipe Daniel da Silva
 * Data......:07/04/25
 * Objetivo..:Verificar numeros impares de 1 ate 20
 *
 * ******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int multiplicacao;
    long long resultado;

    for (numero = 0; numero <= 15; numero++)
    {
        resultado = 1; // Começa com 1 porque 3^0 e 1

        for (multiplicacao = 1; multiplicacao <= numero; multiplicacao++)
        {
            resultado *= 3; // Multiplica 3 por ele mesmo
        }

        printf("3^%d = %lld\n", numero, resultado);
    }

    return 0;
}
