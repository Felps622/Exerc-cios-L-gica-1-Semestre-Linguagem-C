/****************************************************
 *
 * Autor .......:Felipe Daniel da Silva
 * Data ........:21/05/2025
 * Objetivo ....:Fazer uma liha virar coluna
 * 
 ***************************************************/
#include <stdio.h>

int main() {
    float matriz[2][3];
    float contrario[3][2];

    
    printf("Digite os elementos da matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            contrario[j][i] = matriz[i][j];
        }
    }

    
    printf("\nMatriz original (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz ao contrario (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", contrario[i][j]);
        }
        printf("\n");
    }

    return 0;
}
