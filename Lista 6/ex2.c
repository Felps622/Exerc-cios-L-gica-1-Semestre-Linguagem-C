/*
Autor Felipe Daniel da Silva
Data  30/05/2025
Objetivo  Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade 
expressa em dias. */
#include <stdio.h>

//calculo de dias expressos
int diasExpressos(int anos, int meses, int dias) {

    //var
   int idadeDias;

   idadeDias = anos*365+meses*30+dias;
   return idadeDias;

}
//programa principal
int main ( )  {

    //variaveis
    int anos;
    int meses;
    int dias;
    int total;

    printf("Quntas anos voce tem...: ");
    scanf("%d", &anos);
    printf("Quantos meses..........: ");
    scanf("%d", &meses);
    printf("Quantos dias ..........: ");
    scanf("%d", &dias);


    total = diasExpressos( anos, meses,  dias);

    printf("O total de dias expressos sao de .....: %d\n", total);
    

    
    



    return 0;
}