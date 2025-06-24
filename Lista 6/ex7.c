/*
Autor .....: Felipe Daniel da Silva
Data .......: 30/05/2025
Objetivo ...: 
*/
#include <stdio.h>

// Função que calcula o somatório de 1 até n
int somatorio(int n) {
    int soma = 0;
    for(int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero > 0) {
        resultado = somatorio(numero);
        printf("O somatorio de 1 ate %d e: %d\n", numero, resultado);
    } else {
        printf("Por favor, digite um numero positivo.\n");
    }

    return 0;
}
