/********************************************************************
 *
 * Autor.....:Felipe Daniel da Silva
 * data......:09/04/2025
 * objetivo..:Cálculo da Soma de Números Inteiros
 *
 *********************************************************************/
#include <stdio.h>
int main()
{

    // variaveis
    int numero;
    int i;
    int quantidade;
    int somaTotal = 0; // a soma tem te comecar como 0 porque se nao ela ja inicia como a primeira conta que apresenta ela

    printf("Quantos numeros voce quer somar.....:");
    scanf("%d", &quantidade);

    if (quantidade >= 0)
    {
        // o exercicio pode para somar todos os numeros que o ususario pediu eu tinha pensado que podia so ir adicionando
        // porem o loop permite que eu adicione o total em uma variavel e pedir para ir repetindo os numeros baseado em quantas vezes
        // ele pediu para somar e colocar cada total de numeros digitados pelo usuario colocar na variavel soma total
        for (i = 1; i <= quantidade; i++)
        {
            printf("Digite %d numeros.....:", i);
            scanf("%d", &numero);
            somaTotal = somaTotal + numero;
        }
    }
    else
    {
        printf("Por favor digite um numero positivo");
    }
    printf("A soma total de e de %d\n", somaTotal);

    return 0;
}