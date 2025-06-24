/********************************************************************
 *
 * Autor.....:Felipe Daniel da Silva
 * data......:11/04/2025
 * objetivo..:Armazenamento e Análise de Cargos e Salários 
 * nao descobri como guardar uma informaçao de variavel junto com um string
 *
 *********************************************************************/
#include <stdio.h>

int main() {
    char cargos[10][50];     // Vetor para armazenar 10 cargos (strings de até 49 caracteres)
    float salarios[10];      // Vetor para armazenar os salários
    float maiorSalario = 0;  // Variável para armazenar o maior salário
    int indiceMaior = 0;     // Índice do cargo com maior salário

    // Loop para ler cargos e salários
    for (int i = 0; i < 10; i++) {
        printf("Digite a descricao do cargo %d: ", i + 1);
        scanf(" %[^\n]", cargos[i]); // Lê a string com espaços até o ENTER

        printf("Digite o salario do cargo \"%s\": ", cargos[i]);
        scanf("%f", &salarios[i]);

        // Verifica se o salário atual é maior que o maiorSalario até agora
        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
            indiceMaior = i;
        }
    }

    // Resultado final
    printf("\nCargo com maior salario: %s\n", cargos[indiceMaior]);
    printf("Valor do maior salario: R$ %.2f\n", maiorSalario);

    return 0;
}



 /*#include <stdio.h>
int main ( ) {

    int i;
    char cargo[10][30];
    float salario[10];
    float salMaior;
    float salMenor;
    int indiceMaior;

    for ( i = 1; i <= 10; i++)
    {
        printf("Qual o cargo do funcionario...:");
        fflush(stdin);
        fgets(cargo[i], 30, stdin);
        printf("Qual o salario desse cargo....:");
        scanf("%f", &salario[i]);

        if (i == 1)
        {
            salMaior = salario[i];
            salMenor = salario[i];
        } else
        {
            if (salario[i] > salMaior) {
                salario[i] = salMaior;
                indiceMaior = 1;
            }
            if (salario[i] < salMenor) {
                salario[i] = salMenor;
            }
        }
        
        
    }
    printf("O cargo com o maior salraio e o...:%s\n", cargo[i]);
    printf("O salario e de %f", salMaior);
    return 0;
}*/