/****************************************************************************************
 * 
 * Autor.....:Felipe Daniel da Silva
 * Data......:20/03/2025
 * Objetivo..:Fazer um programa para ler dados de um funcionario e cauculos apontados
 * 
 ****************************************************************************************/

 #include <stdio.h>


     int main() {
        
        char nome[30];
        float hrTrabalhadas;
        int nDependentes;
        float valorDependentes;
        float horas;
        float dependentes = 40;
        float salarioBruto;
        float salLiquido;
        float descontosInss;
        float descontoIr;
        float descontoTotal;
        float descInss;

        horas = 12;
        descInss = 0.85;

        printf("Digite o nome do funcionario......: ");
        fflush(stdin);
        fgets(nome, 30, stdin);
        
        printf("Quantidade de horas trabalhadas...: ");
        scanf("%f", &hrTrabalhadas);

        printf("Numero de dependentes.............: ");
        scanf("%d", &nDependentes);

        valorDependentes = nDependentes*dependentes;
        salarioBruto = (hrTrabalhadas*horas)+valorDependentes;
        descontosInss = (salarioBruto*descInss)/100;

        descontoIr = (descontosInss*0.5)/100;
        descontoTotal = descontosInss + descontoIr;
        salLiquido = salarioBruto - descontoTotal;

        printf("\n================================================================\n");
        printf("\nNome do funcionario....................:%s", nome);
        printf("\nSalario bruto..........................:R$%f", salarioBruto);
        printf("\nO valor descontado para o INSS e de....:R$%f", descontosInss);
        printf("\nO valor descontado para o IR e de......:R$%f", descontoIr);
        printf("\nO desconto total foi de................:R$%f", descontoTotal);
        printf("\nO valor do salario liquido e de........:R$%f", salLiquido);
        printf("\n==================================================================");







    return 0;
 }