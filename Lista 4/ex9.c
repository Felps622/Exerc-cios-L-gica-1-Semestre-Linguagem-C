/********************************************************************
 *
 * Autor.....:Felipe Daniel da Silva
 * data......:11/04/2025
 * objetivo..:Análise de Dados da População
 *
 *********************************************************************/
#include <stdio.h>
int main()
{
    int i;
    // variaveis para caucular salarios
    int quantHabitantes;
    float salarios;
    float totalSalarios;
    float mediaSalarios;
    // variaveis dos filhos
    int filhos;
    int totalFilhos;
    int mediaFilhos;
    // variaveis de maior salario
    float salMaior;
    // percentual de salarios de100
    float sal100;

    printf("Quantos habitantes foram usados para fazer a media...: ");
    scanf("%d", &quantHabitantes);

    for (i = 1; i <= quantHabitantes; i++)
    {
        printf("Qual o salario do habitante....: ");
        scanf("%f", &salarios);
        totalSalarios = totalSalarios + salarios;
        if (salarios < 100)
        {
            sal100++;
        }
    }
    sal100 = (sal100 * quantHabitantes) / 100;
    printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", sal100);

    if (salarios > salMaior)
    {
        salMaior = salarios;
        printf("\nO maior salario e de R$%.2f", salMaior);
    }

    if (quantHabitantes > 0)
    {
        mediaSalarios = totalSalarios / quantHabitantes;
        printf("\nA media de salario da cidade e de %.2f", mediaSalarios);
    }
    else
    {
        printf("\nPor favor insira a quantidade de Habitantes");
    }
    for (i = 1; i <= quantHabitantes; i++)
    {
        printf("\nQuantos filhos tem o habitantes ");
        scanf("%d", &filhos);
        totalFilhos = totalFilhos + filhos;
    }

    if (quantHabitantes > 0)
    {
        mediaFilhos = totalFilhos / quantHabitantes;
        printf("\nA media de filhos e %d", mediaFilhos);
    }
    else
    {
        printf("\nOs habitantes nao tem filhos.");
    }

    return 0;
}