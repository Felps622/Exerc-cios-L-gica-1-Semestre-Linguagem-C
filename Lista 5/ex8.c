/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:criar um alguritimo que leia as notas de alunos que foram digitadas e analisar se esta ou nao na media
 *
 ***************************************************/
#include <stdio.h>

int main () {

    //var
    float notas[10];
    float media;
    float soma=0;
    int i;
    int A=0;
    int B=0;
    
    for ( i = 0; i < 10; i++)
    {
        printf("Digite a %d nota..: ", i+1);
        scanf("%f", &notas[i]);
    }
    

    for ( i = 0; i < 10; i++)
    {
        soma += notas[i];
        if (notas[i] < 6.0)
        {
            B++;
        } else if (notas[i] >= 6)
        {
            A++;
        }
        
        
    }
    media=soma/10;
    printf("A soma das nots foram...: %.2f\n", soma);
    printf("A media das notas foram....: %.2f\n", media);
    printf("NOTAS:\n");
    printf("ACIMA DA MEDIA...:[%d]  ABAIXO DA MEDIA...:[%d]",A,B);



    return 0;
}
