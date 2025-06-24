/*
Autor .......: Felipe Daniel da Silva
Data ........: 30/05/2025
Objetivo ....:  criar uma algoritimo que caucule a media de um aluno com base se a nota dele fi A, H ou P
*/
#include <stdio.h>
#include <windows.h>
#include <conio.h>

// cauculo media aritimetica
void mediaAritimetica()
{
    float nota[3];
    float media = 0;
    int i;

    for (i = 0; i < 3; i++)
    {
        // limpa tela
        system("cls");

        // entrada
        printf("Nota %d ...: ", i + 1);
        scanf("%f", &nota[i]);
        media += nota[i];
    }
    printf("A media Aritimetica do aluno e...: %4.3f\n", media/3);

    getch();
}

// media ponderada
void mediaPonderada()
{
    float n[3];
    float media;
    int i;
    /// limpa tela
    system("cls");

    // entrada
    for (i = 0; i < 3; i++)
    {
        printf("Nota %d ...: ", i + 1);
        scanf("%f", &n[i]);
    }

    // calculo
    media = (n[0] * 5 + n[1] * 3 + n[2] * 2) / 10.0;

    printf("A media ponderada e de ...: %4.3f\n", media);
    getch();
}

void mediaHarmonica()
{
    // variaveis
    int i;
    float n[3];
    float media;

    // limpa tela
    system("cls");
    for (i = 0; i < 3; i++)
    {
        printf("Nota %d ...: ", i + 1);
        scanf("%f", &n[i]);
    }

    media = 3.0 / ((1.0 / n[0]) + (1.0 / n[1]) + (1.0 / n[2]));

    printf("A media Harmonica e ...: %4.3f",media);
    getch();
}
// programa principal
int main()
{

    // Variaveis
    char opcao;
    // char A,P,H;

    do
    {

        // limpa tela
        system("cls");
        // menu de opcoes
        printf("|===================================================|\n");
        printf("|Em qual tipo de media vai calcular a nota do aluno.|\n");
        printf("|'A' Media Aritimetica                              |\n");
        printf("|'P' Media Ponderada                                |\n");
        printf("|'H' Media Hrmonica                                 |\n");
        printf("|'S' Sair.                                          |\n");
        printf("==>");
        scanf(" %c", &opcao);

        if (opcao == 'A')
        {
            mediaAritimetica();
        }
        else if (opcao == 'P')
        {
            mediaPonderada();
        }
        else if (opcao == 'H')
        {
            mediaHarmonica();
        }

    } while (opcao != 'S');

    return 0;
}