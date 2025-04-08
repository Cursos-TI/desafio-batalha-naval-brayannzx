#include <stdio.h>

#define TAMANHO 10

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Posição inicial e tamanho dos navios
    int navioVerticalX = 2, navioVerticalY = 1;
    int tamanhoVertical = 4;

    int navioHorizontalX = 5, navioHorizontalY = 7;
    int tamanhoHorizontal = 3;

    // Posicionando navio vertical (valor 1)
    for (int i = 0; i < tamanhoVertical; i++) {
        if (navioVerticalX + i < TAMANHO) {
            tabuleiro[navioVerticalX + i][navioVerticalY] = 1;
        }
    }

    // Posicionando navio horizontal (valor 2)
    for (int i = 0; i < tamanhoHorizontal; i++) {
        if (navioHorizontalY + i < TAMANHO) {
            tabuleiro[navioHorizontalX][navioHorizontalY + i] = 2;
        }
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas do navio vertical (valor 1):\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        if (navioVerticalX + i < TAMANHO) {
            printf("(%d, %d)\n", navioVerticalX + i, navioVerticalY);
        }
    }

    printf("\nCoordenadas do navio horizontal (valor 2):\n");
    for (int i = 0; i < tamanhoHorizontal; i++) {
        if (navioHorizontalY + i < TAMANHO) {
            printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
        }
    }

    return 0;
}
