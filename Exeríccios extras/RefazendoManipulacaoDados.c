/************************************************************************
 *
 * Autor .....:Felipe Daniel da Silva
 * Data ......:20/05/2025
 * Objetivo ..:Manipulaçao de dados
 *
 ***********************************************************************/
#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<conio.h>

int main()
{

    // variaveis
    int i;
    int j;
    
    int codigo;
    int cliente[5];
    int flag;

    system("color 0A");

    for (i = 0; i < 5; i++)
    {
        do
        {
            system("cls");
            printf("Digite o cliente %d...: ",i+1);
            scanf("%d", &codigo);

            flag = -1;
            for ( j = 0; j < i; j++)
            {
                if(cliente[j] == codigo) {
                printf("O cliente %d ja existe na posicao %d\n",cliente[j],j);
                system("pause");
                flag =j;
                }
            }
            
        } while (flag != -1);
        cliente[i] = codigo;
    }

    
    return 0;
}