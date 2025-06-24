/*
Autor     Felipe Daniel da Silva
Data      30/05/2025
Objetivo  Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso
ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres,
peso ideal = 62.1 x alt - 44.7.
*/
#include <stdio.h>
#include <Windows.h>
// calculo peso ideal feminino
int funcPesoIdealF(float alt)
{

    // float altura;
    float pesoIdeal;

    pesoIdeal = 62.1 * alt - 44.7;
    return pesoIdeal;
}

//cauculo peso ideal masculino
int funcPesoIdealM(float alt)
{

    // float altura;
    float pesoIdeal;

    pesoIdeal = 72.1 * alt - 58;
    return pesoIdeal;
}
// programa principal
int main()
{

    // variaveis
    char sexo;
    float alt;

    float resultado;

    printf("Qual seu sexo....: ");
    scanf("%c", &sexo);

    printf("Qual sua altura..: ");
    scanf("%f", &alt);

    if (sexo == 'f' || 'F')
    {
        resultado = funcPesoIdealF(alt);

        printf("O peso ideal para essa mulher e....: %4.2f \n", resultado);
        
    } else if (sexo == 'm'||'M')
    {
        resultado = funcPesoIdealM(alt);
        printf("O peso ideal para esse Homem e.....: %4.2f \n", resultado);
    }
    

    return 0;
}
