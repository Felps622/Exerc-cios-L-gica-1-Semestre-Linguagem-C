/*********************************************************************
 * 
 * Autor.....:Felipe Daniel da Silva
 * Data......:03/04/2025
 * Objetivo..:fazer umprograma que imprima uma mensage de acordo com o sexo do usuario
 * 
 *********************************************************************/
#include <stdio.h>
int main( ){

    char sexo;
    char nome[40];
    
    printf("Digite seu nome...:");
    fflush(stdin);
    fgets(nome, 40, stdin);
    printf("Qual o sexo.......:");
    scanf("%c", &sexo);

    if ((sexo == 'F') || (sexo == 'f')) {
       printf("%s.SRA", nome);
    }else if((sexo == 'M') || (sexo == 'm')){
       printf("%s.SR", nome);  
    }else{
        printf("Sexo invalido.");
    } 
     
    printf("\n==========================================\n");
    printf("O nome e %s\n", nome);
    printf("o sexo e %c\n", sexo);

    return 0;
}