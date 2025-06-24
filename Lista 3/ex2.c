#include <stdio.h>
 
int main () {
    
    float slFixo;
    float comissao;
    float totalVendas;
    float slFinal;
    float gratificacao;
    float inss;
    float ir;

    printf("Digite o valor do salario fixo....:");
    scanf("%f", &slFixo);
    printf("Digite o valor total das vendas....:");
    scanf("%f", &totalVendas);

    slFinal=slFixo+comissao+gratificacao;
    comissao = totalVendas*(0.05/100);
    if (totalVendas >= 1000) {
       gratificacao =150;
    } else {
       gratificacao = 0;
    }
    
    
    if (slFinal<=1518){
        inss = (slFinal*7.5)/100;

    } else if (slFinal <= 2793.88) {
        inss = (slFinal*9)/100;

    }else if (slFinal <= 4190.83){
        inss = (slFinal*12)/100;

    }else{
        inss =(slFinal*14)/100;

    }

    if (slFinal<= 2824) {
        ir = 0;

    }else if (slFinal <= 3751 ) {
        ir = (slFinal*7.5)/100;

    } else if (slFinal <= 4664) {
        ir = (slFinal*15)/100;

    } else if (slFinal <= 7500) {
        ir = (slFinal*22)/100;

    } else {
        ir = (slFinal*27.5)/100;

    }
    slFinal= slFinal- ir -inss;
    printf("Salario final.....:%.2f\n", slFinal);
    printf("O valot total das vendas.:%.2f\n", totalVendas);
    printf("O total de vendas........:%.2f\n", totalVendas);
    printf("O valor da comissao......:%.2f\n", comissao);
    printf("O valor da gratificacao..:%.2f\n", gratificacao);
    printf("O valor do INSS..........:%.2f\n", inss);
    printf("O valor do IR............:%.2f\n", ir);




    return 0;
}