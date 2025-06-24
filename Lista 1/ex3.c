/************************************************************************************
 * 
 * Autor.....:Felipe Daniel da Silva
 * Data......:20/03/2025
 * Objetivo..:Escrever um algoritimo para ler o hodometro e fazer os cauculos
 * 
 *************************************************************************************/

 #include <stdio.h>

     int main() { 
     
        float inicioDia;
        float finalDia;
        float litrosDia;
        float valorDia;
        float KmCorrido;
        float mediaConsumo;
        float desconto;
        float litro = 5.24;
        float lucroDia;


        printf("Indique o odometro do inicio do dia...: ");
        scanf("%f", &inicioDia);

        printf("Indique o odometro do final do dia...: ");
        scanf("%f", &finalDia);

        printf("Indique quantos litros de combustivel foram usados no dia...: ");
        scanf("%f", &litrosDia);

        printf("Idique o valor total recebido no dia...: ");
        scanf("%f", &valorDia);

        KmCorrido = finalDia - inicioDia;
        mediaConsumo = litrosDia/KmCorrido;
        desconto = (litrosDia*litro); 
        lucroDia = valorDia - desconto;
        
        printf("\n============================================================================");
        printf("\nOdometro no inicio do dia...........................:%.2fKm", inicioDia);
        printf("\nOdometro no final do dia............................:%.2fKm", finalDia);
        printf("\nForam percorridos no dia............................:%.2fKm", KmCorrido);
        printf("\nO Valor total recebido dos passageiros foram de.....:R$%.2f", valorDia);
        printf("\nA media de consumo e de.............................:%.2fKm/L", mediaConsumo);
        printf("\nO lucro liquido e de................................:R$%.2f", lucroDia);
        printf("\n============================================================================");



    return 0;
 }