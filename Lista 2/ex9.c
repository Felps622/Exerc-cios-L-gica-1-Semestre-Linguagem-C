/*****************************************************************
 * 
 * Autor.....:Felipe Dniel da Silva
 * Data......:28/03/2025
 * Objetivo..:calculos de salario e comissoes
 * 
 *****************************************************************/
#include <stdio.h>

int main() {
    
    //variaveis
    float salFixo;
    int totalVendas;
    float salFinal;
    float valorCarro;
    float comissaoFixa;
    float comissao; 

    printf("Qual o valor do salario fixo...:");
    scanf("%f", &salFixo);
    printf("Quantas vendas foram feitas....:");
    scanf("%d", &totalVendas);
    printf("Qual ovalor dos carros.........:");
    scanf("%f", &valorCarro);
    printf("Qual o valor da comissao fixa..:");
    scanf("%f", &comissaoFixa);
    
    valorCarro = valorCarro*totalVendas;
    comissao=(valorCarro*totalVendas)/100;
    salFinal = salFixo+comissao+comissaoFixa;

    print("\n=================================================\n");
    printf("O vendedoer vendeu................:%d\n", totalVendas);
    printf("As vendas totais deram............:R$%.2f\n", valorCarro);
    printf("a comissao fixa po venda..........:%.2f\n", comissaoFixa);
    printf("O salario final foi de............:R$%.2f\n", salFinal);

    



    return 0;
}