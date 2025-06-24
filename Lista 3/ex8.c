/*********************************************************************
 * 
 * Autor.....:Felipe Daniel da Silva
 * Data......:03/04/2025
 * Objetivo..:fazer umprograma que imprima uma mensage de acordo com o sexo do usuario
 * 
 *********************************************************************/
#include <stdio.h>
int main( ) {
    
    float n1;
    float n2;
    float n3;
    float n4;
    float med;

    printf("Digite o valor da nota 1.....:");
    scanf("%f", &n1);
    printf("Digite o valor da nota 2.....:");
    scanf("%f", &n2);
    printf("Digite o valor da nota 3.....:");    
    scanf("%f", &n3); 
    printf("Digite o valor da nota 4.....:");
    scanf("%f", &n4);

    med = (n1+n2+n3+n4)/4;

    if (med >=7.0) {
        printf("O aluno foi aprovado!!!");
    }else{
    printf("O Aluno foi reprovado!!!");
    }




    return 0;
}