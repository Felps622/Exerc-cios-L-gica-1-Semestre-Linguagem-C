/*
Aautor .....: Felipe Daniel da Silva
Data .......: 30/05/2025
Objetivo ...: 
*/
#include <stdio.h>

// Funcao que conta o numero de divisores
int contaDivisores(int num) {
    int cont = 0;
    int i;

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            cont++;
        }
    }

    return cont;
}

// Programa principal
int main() {
    int valor;
    int resultado;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido. O numero deve ser positivo.\n");
    } else {
        resultado = contaDivisores(valor);
        printf("O numero de divisores de %d e: %d\n", valor, resultado);
    }

    return 0;
}
