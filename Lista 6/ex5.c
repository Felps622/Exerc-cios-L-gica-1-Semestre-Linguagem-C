/*
Autor .......: Felipe Daniel da Silva 
Data ........: 30/05/2025
Objetivo ....: 
*/
#include <stdio.h>

// Funcao que calcula o fatorial
int fatorial(int num) {
    int fat = 1;
    int i;

    for (i = 1; i <= num; i++) {
        fat = fat * i;
    }

    return fat;
}

// Programa principal
int main() {
    int valor;
    int resultado;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    if (valor < 0) {
        printf("Valor invalido. O numero deve ser positivo.\n");
    } else {
        resultado = fatorial(valor);
        printf("O fatorial de %d e: %d\n", valor, resultado);
    }

    return 0;
}
