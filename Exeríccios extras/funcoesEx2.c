/*************************
 *
 * Autor .......: Felipe Daniel da Silva
 * Data ........:27/05/2025
 * Objetivo ....:menu ultilizando Funçoes
 *
 *************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// declarar a funcao que calcula area do triangulo
void calcula_triangulo()
{
    // variaveis
    float base;
    float altura;
    float area;
    // limpa tela
    system("cls");
    printf("|==================================|\n");
    printf("| CAUCULADORA DE AREA DE TRIANGULO |\n");
    printf("|==================================|\n");
    // leitura de dados
    printf("| DIgite o valor da base...:       |");
    scanf("%f", &base);
    printf("| Digite o valor da altura.:       |");
    scanf("%f", &altura);
    // calculo
    area = (base * altura) / 2;
    printf("|==================================|\n");
    // imprime o resultado
    printf("|   A area do triangulo e %4.2f    |\n", area);
    printf("|==================================|\n");

    system("pause");
}
void caucula_media()
{

    // variaveis
    int i;
    float n[3];
    float media = 0;

    // limpa tela
    system("cls");
    printf("|==================================|\n");
    printf("|       Cauculadora de IMC.        |\n");
    printf("|==================================|\n");
    // leitura de dados
    for (i = 0; i < 3; i++)
    {
        printf("| Digite a nota %d             |", i + 1);
        scanf("%f", &n[i]);
        media += n[i];
    }
    printf("|==================================|\n");
    printf("|A media do aluno e %4.2f          |\n", media / 3);
    printf("|==================================|\n");


    system("pause");
}

void calcula_IMC()
{

    // variaveis
    float peso;
    float altura;
    float IMC;
    // limpa tela
    system("cls");

    printf("Cauculadora de IMC.\n");
    printf("==================================\n");
    // leitura de dados
    printf("Digite qual o seu peso...: ");
    scanf("%f", &peso);
    printf("Digite a sua altura......: ");
    scanf("%f", &altura);
    printf("==================================\n");

    IMC = peso / (altura * altura);
    printf("O IMC E [%4.2f]\n", IMC);
    system("pause");
}

// Programa principal
int main()
{

    // Declaraçoes de variaveis
    int opcao;

    do
    {

        // imprimir menu de opcoes
        printf("Menu de opcoes:\n");
        printf("1. Calcular a Area de um Triangulo.\n");
        printf("2. Calcular a Media do aluno.\n");
        printf("3. Calcular o IMC de um pessoa.\n");
        printf("4. Sair\n");
        printf("Sua escolha.: ");
        // ler a opçao
        scanf("%d", &opcao);

        // verifica a escolha
        switch (opcao)
        {
        case 1:
            calcula_triangulo();
            break;
        case 2:

            caucula_media();
            break;
        case 3:
            calcula_IMC();
            break;

        default:
            break;
        }

    } while (opcao != 4);

    return 0;
}