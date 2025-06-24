/*****************************************************************
 * 
 * Autor.....:Felipe Dniel da Silva
 * Data......:27/03/2025
 * Objetivo..:Caucular salario e fazer os cauculos apontados
 * 
 *****************************************************************/
#include <stdio.h>

int main() {
    
    //variaveis
    int nVendedor;
    float salFIxo;
    int vendasTotal;
    float percent;
    float salTotal;


    printf("Qual o numero do vendedor...............:");
    scanf("%d", &nVendedor);
    printf("Qual vo valor do salario fixo...........:");
    scanf("%f", &salFIxo);
    printf("Quantas vendas esse vendedor fez........:");
    scanf("%d", &vendasTotal);
    printf("Qual a porcentgem o vendedor ganhar.....:");
    scanf("%f", &percent);
    

    vendasTotal = (vendasTotal*percent)/100;
    salTotal = salFIxo+vendasTotal;

    printf("\n===================================================\n");
    printf("Numero do vendedor ..........:%d\n", nVendedor);
    printf("O salario fixo e.............:%.2f\n", salFIxo);
    printf("Ele vendeu no total..........:%d\n",vendasTotal);
    printf("Ele ganhara de porcentagem...:%.2f\n", percent);
    printf("O salario total e de.........:%.2f\n", salTotal);



    return 0;
}