/*****************************************************************
 * 
 * Autor.....:Felipe Dniel da Silva
 * Data......:28/03/2025
 * Objetivo..:
 * 
 *****************************************************************/
#include <stdio.h>

int main() {
    
    //variaveis
    float precoCusto;
    int nVendedores;
    float comissao;  //dividido igualmente para cada vendedor
    float salMInimo;
    float salVendedorFim;
    float bicValores;
    int bicVendidas;
    float lucroLiquido;

    printf("Quantos vendedores tem na loja...............:");
    scanf("%d", &nVendedores);
    printf("Qual o valor do salario minimo...............:");
    scanf("%f", &salMInimo);
    printf("Quantas bicicletas foram vedidas.............:");
    scanf("%d", &bicVendidas);
    printf("Qual o preco de venda de cada bicicleta......:");
    scanf("%f", &bicValores);
    printf("Qual o preco de custo das bicicletas.........:");
    scanf("%f", &precoCusto);

    bicValores = bicVendidas*bicValores;
    comissao = (bicVendidas*15)/100 /nVendedores;
    salMInimo = salMInimo*2;
    salVendedorFim = salMInimo+comissao;
    lucroLiquido = bicValores-salVendedorFim;
    printf("\n==================================================================\n");
    printf("Numero de vendedores............................:%d\n", nVendedores);
    printf("O valor do salario minimo.......................:%.2f\n", salMInimo);
    printf("Opreco de custo de cada bicicleta...............:%.2f\n", precoCusto);
    printf("Foram vendidas de bicicletas....................:%d\n", bicVendidas);
    printf("O salario final de cada vendedor e de...........:%.2f\n", salVendedorFim);
    printf("O lucro total da loja e de......................:%.2f\n", lucroLiquido);



    return 0;
}