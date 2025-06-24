/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:06/01/2025
 * Objetivo.....:
 * 
 **************************************************************************************************************/
#include <stdio.h>
int main ( ) {
    
    char a;
    char b;
    char c;
    char d;
    char cauculo;
    int diametro;
    float lado;
    float altura;
    float area;
    float raio;

    printf("Digite qual vai ser seu tipo de cauculo....:");
    scanf("%d", &cauculo);


    if ( cauculo == 'a' || 'A') { //cauculo da area do circulo
    printf("Qual o valor da raio.....:");
    scanf("%f", &raio);
    area =3.14*(raio/2)*raio;
    printf("A área do círculo de raio %d é igual a %dm2", raio, area); 
    

    } else if ( cauculo == 'b' || 'B'){ // cauculo da area do retangulo
        printf("Qual o valor dos lados.....:");
        scanf("%f", &lado);
        printf("Qual o valor da altura.....:");
        scanf("%f", &altura);
        area = lado*altura;
        raio = altura/2;
        printf("A área do retangulo e de de raio %d é igual a %dm2", raio, area);
    } else if ( cauculo == 'c'|| 'C') {  // cauculo da area do trapesio
        int b1;
        int b2;
        
        printf("Qual o valor da base menor.....:");
        scanf("%f", &b1);
        printf("Qual o valor da base maior.....:");
        scanf("%f", &b2);
        printf("Qual o valor da baltura.....:");
        scanf("%f", &altura);
        area = (b1+b2)*altura;
        printf("A área do retangulo e de  %d", area);
    } else if (cauculo == 'd' || 'D') {
        printf("Qual o valor dos lados.....:");
        scanf("%f", &lado);
        printf("Qual o valor da altura.....:");
        scanf("%f", &altura);
        area = lado*altura;
        printf("A área do triangulo e de  %d", area);
    }



    return 0;
}