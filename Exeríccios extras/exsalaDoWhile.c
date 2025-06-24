/***********************************************************
 *
 * Autor......:Felipe Daniel da Silva
 * Data.......:14/04/2025
 * Objetivo...:Exercicio sala
 *#include <windows.h> <--- biblioteca que pode usar o comando sysem("cls") e limpa interaçoes
 ***********************************************************/
#include <stdio.h>
#include <windows.h>
int main()
{

    int m;
    int n;
    int i;
    int result;
    int continuar;

    do
    {
        system("cls");
        printf("Digite o valor de 'M'...: ");
        scanf("%d", &m);
        do
        {
            printf("Digite o valor de 'N'...: ");
            scanf("%d", &n);
            if (n <= 0)
            {
                printf("O valor de N prescisa ser maior que 0 \n\n");
            }
        } while (n <= 0); // enquanto o numero 'N' for menor ou igual a 0 aparecera essa mensagem

        result = 1;
        for (i = 1; i <= n; i++)
        {
            result = result * m;
        }
        printf("\n%d elevado a %d e =.....:%d\n\n", m, n, result);

        printf("Tecle '1' para fazer um novo cauculo e '2' para sair..:");
        scanf("%d", &continuar);

    }while (continuar == 1);
}