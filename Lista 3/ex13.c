/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:06/01/2025
 * Objetivo.....:programa para ler hora inicial e final do jogo
 * 
 **************************************************************************************************************/
#include <stdio.h>
int main( ) {
    
    float hrInc;
    float hrFim;
    float duracao;


    printf("DIgite o horario inicial....:");
    scanf("%f", &hrInc);
    printf("Dingite o horario final.....:");
    scanf("%f", &hrFim);

    if (hrInc == hrFim) {
        duracao = 24;
    } else if ( hrInc < hrFim) {
        duracao = hrInc - hrFim;

    } else {
        duracao = hrInc + hrFim;
    }
   
    printf("A duracao do jogo foi de......:%f", duracao);



    return 0;
}