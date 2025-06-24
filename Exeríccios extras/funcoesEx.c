/*************************************
 *
 * autor..........:Felipe Daniel da Silva
 * data...........:26/05/2025
 * Objetivo.......:Caucular a area do retangulo
 *
 *************************************/
#include <stdio.h>

int cauculoArea(float c, float a)
{

    float area;
    area = c * a;
    return area;

}
int main()
{

    // var
    float comprimento;
    float altura;
    float area;

    printf("Digite o comprimento.....: ");
    scanf("%f", &comprimento);

    printf("Digite a altura.......: ");
    scanf("%f", &altura);

    area = cauculoArea(comprimento, altura);
    printf("O valor da area e de .....: %4.2f", area);

    return 0;
}