/*************************************************************************
 * 
 * Autor.....:Feleipe Daniel da Silva
 * Data......:26/03/2025
 * Objetivo..:Converter o valor do real para o dolar
 * 
 *************************************************************************/
#include <stdio.h>

 int main() {
     
    // variaveis
    float real;
    float dolar;

    dolar = 5.74;
    //interaçoes
    printf("Digite o valor em reais...:");
    scanf("%f", &real);

    real = real/dolar;
   //saida de dados
   printf("R$%.2f E igual a %.2f dolares.", real ,dolar);

    return 0;
 }