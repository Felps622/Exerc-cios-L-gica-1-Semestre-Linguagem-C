/*********************************************************************************
 * 
 * Autor......:Felipe Daniel Da Silva
 * data.......:26/03/2025
 * Objetivo...:Ler informacoes sobre os automoveis e os cauculos dirigidos
 * 
 *********************************************************************************/
#include <stdio.h>

int main(){

   //variaveis
   float valFabrica;
   float valFinal;

   printf("Qual o valor de Fabrica do Automovel...: ");
   scanf("%f", &valFabrica);

   valFinal = valFabrica + (valFabrica*28)/100;
   valFinal = valFinal + (valFinal*45)/100;

   printf("O valor final do automovel e de....:%.2f", valFinal);



    return 0;
}