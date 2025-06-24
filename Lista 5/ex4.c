/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:19/05/2025
 * Objetivo ....:criar um vetor e imprimir o menor e o maior numero
 *
 ***************************************************/
# include <stdio.h>

int main () {

    //var
    int i;
    int num[10];
    int numM ;
    int numm ;

    

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %d numero...: ", i + 1);
        scanf("%d", &num[i]);
    }
    numM = num[0];
    numm = num[0];

    for ( i = 0; i < 10; i++)
    {
        if (num[i] < numm)
        {
            numm = num[i];
        }
        if (numM < num[i]  ){
            numM =  num[i];
        }
        
    }

    printf("Numero maior[%d]  Numero menor[%d]",numM,numm);
    
    


    return 0;
}