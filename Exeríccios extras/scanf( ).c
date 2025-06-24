/******************************************************************************
Aluno...:Felipe Daniel
Data....:18/03/2025
Objetivo: funçao scanf()

*******************************************************************************/

#include <stdio.h>

int main()  {
    
    char nome[40];
    char endereco[50];
    
    printf("Digite seu nome......: ");
    fflush(stdin);
    fgets(nome,40,stdin);
    printf("Digite seu endereco..: ");
    fflush(stdin);
    fgets(endereco,50,stdin);
    
    printf("O meu nome e %s \n",nome);
    printf("Meu nome e %s \n",endereco);

   
    return 0;
}