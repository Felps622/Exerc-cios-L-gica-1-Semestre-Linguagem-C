/************************************************************************************
 * 
 * Autor......:Felipe Daniel da Silva
 * data.......:06/03/2025
 * Objetivo...:Ler os nomes e valores dos automoveis e adicionar os cauculos
 *
 * ***********************************************************************************/
#include <stdio.h>

int main(){
   //Declaracao de variaveis
   char nomeAuto[30];
   float precoAutomovel;
   float precoFinal;

   //Interacao
   printf("Nome do automovel...: ");
   fflush(stdin);
   fgets(nomeAuto, 30, stdin);

   printf("Qual o valor de fabrica do automovel...: ");
   scanf("%f", &precoAutomovel);

   precoFinal =  precoAutomovel +(precoAutomovel*45)/100;
   precoFinal = precoFinal + (precoFinal*28)/100; 
  
   //impressao das declaracoes
   printf("\n==================================================\n");
   printf("O veiculo................: %s",nomeAuto);
   printf("Tera o valor final de....: %.2f", precoFinal);
   printf("\n==================================================\n");

    return 0;
}