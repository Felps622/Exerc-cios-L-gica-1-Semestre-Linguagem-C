/**************************************************************************
 * 
 * Autor.....:Felipe Daniel da silva
 * data......:27/03/2025
 * Objetivo..:caucular e escrever media harmonica
 * 
 **************************************************************************/

 #include <stdio.h>
  
 int main() {
    
    float vala;
    float valb;
    float valc;
    float medAri;
    float medHar;

    printf("DIGITE O VALOR 1.....:");
    scanf("%f",&vala);
    printf("DIGITE O VALOR 2.....:");
    scanf("%f",&valb);
    printf("DIGITE O VALOR 3.....:");
    scanf("%f",&valc);

    medAri = (vala + valb + valc)/3;
    medHar = 3/(1/vala + 1/valb + 1/valc);

    printf("\n=======================================\n");
    printf("A media harmonica e de....:%.2f\n", medHar);
    printf("A media Aritimetica e de .:%.2f", medAri);


    return 0;
 }