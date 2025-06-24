/*****************************************************************************************
 * 
 * Autor.....:Feliepe Daniel da Silva
 * Data......:20/03/2025
 * Objetivo..:Escrevver um  programa que caucule o salario e comissoes dos vendedores
 * 
 ********************************************************************************************/

 #include <stdio.h>
   
    int main() {

    float salMinimo;
    float comissao;
    int empregados;
    float custoBic;
    float acrecimo;
    float precoBrutoBic;
    int bicVendidas;
    float salFinal;
    float lucroLiquido;
    float salEmpregados;
    
    printf("Qantos empregados tem na loja.............: ");
    scanf("%d", &empregados);
    printf("Qual o valor do salario minimo............: ");
    scanf("%f", &salMinimo);
    printf("Qual o preco de custo de cada bicicleta...: ");
    scanf("%f", &custoBic);
    printf("Quantas bicicletas foram vendidas.........: ");
    scanf("%d", &bicVendidas);

    acrecimo = (custoBic*50)/100;
    precoBrutoBic = custoBic + acrecimo;
    comissao = (custoBic*15)/100 /empregados;
    salFinal = (salMinimo*2) + comissao;
    salEmpregados = salFinal*empregados;
    lucroLiquido = precoBrutoBic*bicVendidas - salEmpregados;


    printf("\n===================================================================");
    printf("\nO Salario final de cada funcionario e de.....: %.2f", salFinal);
    printf("\nO lucro liquido de loja e foi de.............: %.2f", lucroLiquido);
    printf("\nA comissao de cada funcionario foi de........: %.2f", comissao);
    printf("\n===================================================================");

        
     return 0;

    }