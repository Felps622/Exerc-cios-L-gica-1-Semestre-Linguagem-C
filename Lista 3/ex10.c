/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:05/01/2025
 * Objetivo.....:caucular notas
 * 
 **************************************************************************************************************/
#include <stdio.h>

int main( ) {

    char nome[30];
    float n1;
    float n2;
    float n3;
    float med;

    printf("Digite o nome do aluno.....:");
    fflush(stdin);
    fgets(nome,30,stdin);

    printf("Digite a nota 1.....:");
    scanf("%f", &n1);
    
    printf("Digite a nota 2.....:");
    scanf("%f", &n2);
    
    printf("Digite a nota 3.....:");
    scanf("%f", &n3);
    
    med =(n1*2 + n2*3 + n3*5)/(2+3+5);
    
    if (med  <= 4.0 ) {
        printf("Nota D.");
    } else if ( med <=6.0){
        printf("Nota C.");
    } else if(med <=8.0) {
        printf("Nota B.");
    } else if (med <=10.0) {
        printf("Nta A.");
    } else {
        printf("Nota invalida");
    }
    



    return 0;
}