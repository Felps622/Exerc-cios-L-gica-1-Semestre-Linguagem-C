/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:06/01/2025
 * Objetivo.....:ler dados do funcionario e cauculos de salario
 * 
 **************************************************************************************************************/
#include <stdio.h>
int main ( ) {
   
    char nome[30];
    int hrTrabalhadas;
    int valHr;
    float salFinal;
    float acrecimo;

    printf("Digite o nome do funcionario...:");
    fflush(stdin);
    fgets(nome, 30, stdin);
    printf("Total de horas trabalhadas.....:");
    scanf("%d", &hrTrabalhadas);
    printf("Valor da hora trabalhada.......:");
    scanf("%d", &valHr);

    if (hrTrabalhadas >= 40) {
        acrecimo = (valHr*50)/100; 
    } else {
        acrecimo = 0;
    }
    
    salFinal = hrTrabalhadas*valHr + acrecimo;

    printf("Nome do funcionario...............:%s\n", nome);
    printf("O total de horans trabalhadas.....:%d\n", hrTrabalhadas);
    printf("O valor da hora...................:%d\n", valHr);
    printf("O valor do salario total..........:%.2f\n", salFinal);







    return 0;
}