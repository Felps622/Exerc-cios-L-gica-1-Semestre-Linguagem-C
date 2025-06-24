/***********************************************************
 *
 * Autor......:Felipe Daniel da Silva
 * Data.......:15/04/2025
 * Objetivo...:Exercicio sala digitar um determinado numero de valores caucular a
 * media caucular a quatidade de positivos de negativos percentual de positivos e percentual de negativos
 *
 ***********************************************************/
#include <stdio.h>
#include <windows.h>
int main()
{

    // variaveis de entrada
    int numero;
    float soma = 0;
    float media;
    int cont = 0;
    float numNegativo = 0;
    float numPositivo = 0;
    float percPositivos;
    float percNegativos;
    int resp;

    do
    {

        system("cls");
        printf("Digite um numero...: ");
        scanf("%d", &numero);
        soma += numero;
        cont++;

        if (numero >= 0)
        {
            numPositivo++;
        }
        else
        {
            numNegativo++;
        }

        printf("\n\n\n");
        printf("Deseja digitar mais um numero? (1-Sim)  (2-Nao)...:");
        scanf("%d", &resp);
    } while (resp == 1);

    // cauculo
    media = soma / cont;

    percPositivos = (numPositivo / cont) * 100;
    percNegativos = (numNegativo / cont) * 100;

    // resultados
    system("cls");
    printf("\n\n\n\n");
    printf("Quantidade ne numeros digitados.....:%d\n", cont);
    printf("A soma dos numeros digitados........:%.2f\n", soma);
    printf("A media e...........................:%.2f\n", media);
    printf("Quantidade de numeros negativos.....:%.2f\n", numNegativo);
    printf("O percentual de numeros negativos....:%.2f\n", percNegativos);
    printf("A quantidade de numeros positivos...:%.2f\n", numPositivo);
    printf("O percentual de numeros positivos...:%.2f\n", percPositivos);
}


