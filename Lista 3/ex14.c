/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:06/01/2025
 * Objetivo.....:caucular horas extras dentro das condiçoes
 * 
 **************************************************************************************************************/
#include <stdio.h>
int main  ( ) {

    int hrExtra;
    int hrFaltadas;
    float premio;

    printf("Quntas horas extras..............:");
    scanf("%d", &hrExtra);
    printf("Qunatas horas foram faltadas.....:");
    scanf("%d", &hrFaltadas);

    hrExtra = hrExtra - hrFaltadas;

    if (hrExtra <= 10) {
        premio = 20;
    } else if (hrExtra <= 20) {
        premio = 40;
    } else if (hrExtra <= 30) {
        premio = 60;
    }else if (hrExtra <= 40) {
        premio = 80;
    } else {
        premio = 100;
    }

    hrExtra = premio + hrExtra;
    printf("O valor das horas nao total e de%d", hrExtra);




    return 0;
}