/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:31/01/2025
 * Objetivo.....: fazer um programa com os descontos baseadas nas idades apontadas
 * 
 **************************************************************************************************************/
#include <stdio.h>

int main() {
    
    //variaveis
    char nome[40];
    int idade;
    char sexo;
    float mensalidade;
    float desconto;
    float vlFinal;

    printf("Digite o nome do socio.....:");
    fflush(stdin);
    fgets(nome,40,stdin);
    printf("Digite a idade......:");
    scanf("%d", &idade);
    printf("Digite o sexo do socio.....:");
    scanf("%c", &sexo); 
    printf("Qual o valor da mensalidade....:");
    scanf("%f", &mensalidade);

    //%c porque apenas um caracter
    if ((sexo == 'F') || (sexo == 'f')) {
        if (idade <= 30){
            desconto = mensalidade* (20/100);
        }else if (idade <=40) {
            desconto = mensalidade* (30/100);
        }else{
            desconto = mensalidade* (35/100);
        }
    }else if((sexo == 'M') || (sexo == 'm')){
        if(idade <= 25) {
            desconto =0;
        }else{
            desconto = mensalidade* (25/100);
        }
    } else {
        printf("Sexo invalido");
    }
    
    vlFinal = mensalidade-desconto;
    printf("\n================================================\n");
    printf("Nome do socio.......:%s\n", nome);
    printf("Idade do socio......:%d\n", idade);
    printf("O valor do desconto e.....:%.2f\n", desconto);
    printf("O valor final e de........:%.2f\n",  vlFinal);




    return 0;
}