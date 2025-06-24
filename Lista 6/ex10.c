/*
Autor .....: Felipe Daniel da Silva
Data .......: 31/05/2025
Objetivo ...: Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito,
conforme a tabela abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A
*/
#include <stdio.h>

// verificaçao
int verifiNota()
{

    // variaveis
    float nota[3];
    int i;
    float media = 0;
    char letra;

    do
    {
        for (i = 0; i < 3; i++)
        {
            printf("Qual a nota %d ....: ", i + 1);
            scanf("%f", &nota[i]);
            media += nota[i];
        }
        media = media/3;

        if (media < 0)
        {
            printf("A media foi menor que 0!\n");
        }
        else if (media <= 4.9)
        {
            letra = 'D';
        }
        else if (media <= 6.9)
        {
            letra = 'C';
        }
        else if (media <= 8.9)
        {
            letra = 'B';
        }
        else if (media <= 10.0)
        {
            letra = 'A';
        }else{
            printf("A media no pode ser maio que 10.0!\n");
        }
    } while (media < 0 || media > 10.0);

    return letra;
}

// preograma principal
int main()
{

    // variaveis
    char resultado;
   // int verif;

    resultado = verifiNota();

    printf("A nota e %c", resultado);

    return 0;
}