#include <stdio.h>

#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    printf("=== Desafio de Xadrez ===\n\n");
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
    printf("Movimento da Torre (5 casas para a direita):\n");
    int j = 0;
    while (j < TORRE_PASSOS) {
        printf("Direita\n");
        j++;
    }
    printf("\n");
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_PASSOS);
    printf("\n=== Fim da Simulação ===\n");

    return 0;
}
