/*******************************************************************

Autor......:Felipe Daniel da Silva
Data.......:19/03/2025
Objetivo...:Fazer um programa para calcular os km percorrido e os litros de combustivel foram gastos

********************************************************************/

#include <stdio.h>

int main()  {

     float LitroCombus = 5.24;
     float KmPercorridos;
     float combusGasto;
     float mediaConsumo;
     float combusReal;

     printf("Descreva quantos Km tiveram a viagem...: ");
     scanf("%f", &KmPercorridos);

     printf("Quntos litros de combustivel foram gastos na viagem...: ");
     scanf("%f", &combusGasto);

     mediaConsumo = KmPercorridos/combusGasto;
     combusReal = combusGasto*LitroCombus;
     
     printf("\n=================================================================");
     printf("\nForam gastos de combustivel...........:%.2fL", combusGasto);
     printf("\nForam percorridos.....................:%.2fKm", KmPercorridos);
     printf("\nForam gastos de combustivel...........:R$%.2f",combusReal);
     printf("\nA media de combustivel gasto foi de...:%.2fL por Km", mediaConsumo);
     printf("\n=================================================================");


    return 0;
}
