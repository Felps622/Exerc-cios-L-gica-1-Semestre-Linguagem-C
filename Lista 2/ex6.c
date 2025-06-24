/*****************************************************************
 * 
 * Autor.....:Felipe Dniel da Silva
 * Data......:27/03/2025
 * Objetivo..:Caucular salario e fazer os cauculos apontados
 * 
 *****************************************************************/
#include <stdio.h>

int main(){
    //variaveis
    int hrTrab;
    float valHr;
    int filhos14;
    float salLiquido;

    printf("Digite a quantidade de horas trabalhadas...:");
    scanf("%d", &hrTrab);
    printf("Qual o valor de horas trabalhadas..........:");
    scanf("%f", &valHr);
    printf("Quantos filhos menores de 14 anos voce tem.:");
    scanf("%d", &filhos14);

    hrTrab = hrTrab*valHr;
    salLiquido =hrTrab+(filhos14*13.48);
    
    printf("\n==================================================\n");
    printf("O salario liquido e de........:R$%.2f\n", salLiquido);
    printf("Foram trabalhadas.............:%dH\n", hrTrab);
    printf("O valor da hora trabalhada e de.....:%.2f\n", valHr);


    return 0;
}