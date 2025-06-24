/*****************************************************************************************
 * 
 * Autor....:Felipe Daniel da Silva
 * data.....:18/03/2025
 * Objetivo.:Fazer um programa que imprima dados do usuario e clcule salarios com os descontos apontados
 * 
 ******************************************************************************************/

 #include <stdio.h>

 int main() {

    char nome[30];
    int idade;
    char cargo[30];
    float salBruto;
    float reajuste;
    float salReajustado;
    float gratificacao;
    float salGratificado;
    float impRenda;
    float salLiquido;

    printf("\n===================================================================\n");
    printf("Insira seu nome......................................: ");
    fflush(stdin);
    fgets(nome, 30, stdin);

    printf("Insira o Seu Cargo...................................: ");
    fflush(stdin);
    fgets(cargo, 30, stdin);
    
    printf("Insira sua Idade.....................................: ");
    scanf("%d", &idade);

    printf("Insira o Salario bruto...............................: ");
    scanf("%f", &salBruto);

    reajuste = (salBruto*38)/100;
    salReajustado = reajuste+salBruto;

    printf("\nO valor do reajuste foi de.........................: %.2f", reajuste);
    printf("\nO Salario bruto e..................................: %.2f", salBruto);
    printf("\nO salario reajustado foi para......................: %.2f", salReajustado);
    
    gratificacao =(salReajustado*20)/100;

    printf("\nO valor da gratificacao e de...:%.2f", gratificacao);
    
    salGratificado =(salReajustado+gratificacao);

    impRenda =(salGratificado*15)/100; 
    
    salLiquido = salGratificado-impRenda;

    printf("\nO valor descontado para o imposto de renda e de...: %.2f ",impRenda);
    printf("\nO salario liquido com o desconto e de.............: %.2f ",salLiquido);


    printf("\n===================================================================\n");

    return 0;
 }