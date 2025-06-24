/*
Autor......:Felipe Daniel da Silva
Data.......:18/04/2025
Objetivo...:Crie um programa que peça uma senha ao usuário (senha correta: 1234).
 Dê 3 tentativas. Caso erre as 3, exiba "Acesso bloqueado".
 */

#include <stdio.h>
#include <windows.h>
int main()
{

    // variaveis
    int senha = 1234;
    int tentativas;
    int numero;

    for (tentativas = 1; tentativas <= 3; tentativas++)
    {
        printf("\nDigite sua senha.....: ");
        scanf("%d", &numero);
        if (tentativas == 3)
        {
            system("cls");
            printf("\nSenha invalida!");
            printf("\n\nTentativas esgotadas!");
            break;
        }

        if (numero != senha)
        {
            system("cls");
            printf("\nSenha invalida. Tente novamente!\n");
        }
        if (numero == senha)
        {
            system("cls");
            printf("\nSENHA CORRETA!!!");
            break;
        }
    }
}
