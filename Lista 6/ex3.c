/*
Autor     Felipe Daniel da Silva
Data      30/05/2025
Objetivo  */
#include <stdio.h>

// Funcao que verifica se um numero e perfeito
int numeroPerfeito(int num) {
    int soma = 0;
    int i;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num) {
        return 1; // verdadeiro, e perfeito
    } else {
        return 0; // falso, nao e perfeito
    }
}

int main() {
    int numero;

    // Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Chamada da funcao
    if (numeroPerfeito(numero)) {
        printf("O numero %d e perfeito\n", numero);
    } else {
        printf("O numero %d nao e perfeito\n", numero);
    }

    return 0;
}
