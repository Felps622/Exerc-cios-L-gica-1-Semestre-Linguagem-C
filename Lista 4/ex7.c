/********************************************************************
 *
 * Autor.....:Felipe Daniel da Silva
 * data......:11/04/2025
 * objetivo..:Análise de Alturas de Alunos
 *
 *********************************************************************/
#include <stdio.h>

int main() {
    int i;
    int numero;
    int maisAlto;
    int maisBaixo;
    float altura;
    float alturaMaior;
    float alturaMenor;

    for (i = 1; i <= 5; i++) {
        printf("Digite o numero do aluno %d: ", i);
        scanf("%d", &numero);

        printf("Digite a altura do aluno %d (em cm): ", i);
        scanf("%f", &altura);

        if (i == 1) {
            // No primeiro aluno para pegar como base
            maisAlto = numero;
            maisBaixo = numero;
            alturaMaior = altura;
            alturaMenor = altura;
        } else {
            
            if (altura > alturaMaior) {
                alturaMaior = altura;
                maisAlto = numero;
            }
            
            if (altura < alturaMenor) {
                alturaMenor = altura;
                maisBaixo = numero;
            }
        }
    }

    printf("\nAluno mais alto: %d com %.2f cm\n", maisAlto, alturaMaior);
    printf("Aluno mais baixo: %d com %.2f cm\n", maisBaixo, alturaMenor);

    return 0;
}

