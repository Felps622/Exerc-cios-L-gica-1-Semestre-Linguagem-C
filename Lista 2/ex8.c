/*****************************************************************
 * 
 * Autor.....:Felipe Dniel da Silva
 * Data......:27/03/2025
 * Objetivo..:caucular salarios e aumentos
 * 
 *****************************************************************/
#include <stdio.h>

int main() {

    //variaveis
    float salAtual;
    float aumento;
    int nFuncionario;
    float salFinal;



    printf("Qual o numero do funcionario.....:");
    scanf("%d", &nFuncionario);
    printf("Qual o salario atual do funcionario.....:");
    scanf("%f", &salAtual);

    aumento = (salAtual*8)/100;
    salFinal = salAtual + aumento;

    printf("\n================================================\n");
    printf("Numero do funcionario............:%d\n", nFuncionario);
    printf("O valor do almento foi de........:%.2f\n", aumento);
    printf("O salario atual e de.............:%.2f\n", salAtual);
    printf("O salario final e de.............:%.2f\n", salFinal);




    return 0;
}