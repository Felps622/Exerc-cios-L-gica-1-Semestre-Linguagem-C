/********************************************************************
 *
 * Autor.....:Felipe Daniel da Silva
 * data......:11/04/2025
 * objetivo..:Contagem de Votos em uma Eleição Presidencial
 *
 *********************************************************************/
#include <stdio.h>
#include <windows.h>
int main()
{

    // variaveis de entrada
    int voto;
    int votoTotal = 0;
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int candidato4 = 0;
    int votosNulos = 0;   // 5
    int votosBrancos = 0; // 6

    do
    {
        system("cls");
        printf("\nTabela de candidatos\n\n");
        printf("Candidato 1\n");
        printf("Candidato 2\n");
        printf("Candidato 3\n");
        printf("Candidato 4\n");
        printf("Vota em 5 (Nulo)\n");
        printf("Voto em 6 (Branco)\n");
        printf("Digite '0' para encerrar o programa.\n");
        printf("Para qual candidato voce vota...: ");
        scanf("%d", &voto);
        votoTotal += +1;

        switch (voto)
        {
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
            candidato3++;
            break;
        case 4:
            candidato4++;
        case 5:
            votosNulos++;
            break;
        case 6:
            votosBrancos++;
            break;
        case 0:
            // programa vai para de fazer loop
        default:
            printf("\nEsta opcao e invalida.Tente novamente.!\n");
            break;
        }

    } while (voto != 0);

    printf("\nO total de votos foram de........: %d", votoTotal - 1);
    printf("\nO candidato 1 teve no total......:%d", candidato1);
    printf("\nO candidato 2 teve no total......:%d", candidato2);
    printf("\nO candidato 3 teve no total......:%d", candidato3);
    printf("\nO candidato 4 teve no total......:%d", candidato4);
    printf("\nTeve no total de votos nulos.....:%d", votosNulos);
    printf("\nTeve no total de votos em Branco.:%d", votosBrancos);

    return 0;
}