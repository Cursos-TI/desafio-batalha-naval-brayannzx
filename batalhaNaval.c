#include <stdio.h>

// Função para exibir matrizes (usada nas habilidades especiais)
void exibirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// 🏅 Nível Novato
void nivelNovato() {
    printf("=== Nível Novato ===\n");
    int tabuleiro[5][5] = {0};

    // Navio horizontal (tamanho 3)
    int x1 = 1, y1 = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x1][y1 + i] = 1;
        printf("Navio horizontal: (%d, %d)\n", x1, y1 + i);
    }

    // Navio vertical (tamanho 3)
    int x2 = 0, y2 = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x2 + i][y2] = 2;
        printf("Navio vertical: (%d, %d)\n", x2 + i, y2);
    }
}

// 🏅 Nível Aventureiro
void nivelAventureiro() {
    printf("\n=== Nível Aventureiro ===\n");
    int tabuleiro[10][10] = {0};

    // Navio horizontal
    for (int i = 0; i < 4; i++) {
        tabuleiro[1][i] = 3;
    }

    // Navio vertical
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][5] = 3;
    }

    // Navio diagonal principal (\)
    for (int i = 0; i < 4; i++) {
        tabuleiro[2 + i][2 + i] = 3;
    }

    // Navio diagonal secundária (/)
    for (int i = 0; i < 4; i++) {
        tabuleiro[6 - i][2 + i] = 3;
    }

    // Exibe o tabuleiro completo
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// 🏅 Nível Mestre
void nivelMestre() {
    printf("\n=== Nível Mestre ===\n");

    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) {
        cone[2][j] = 1;
    }

    // Cruz
    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 1;
    }
    cruz[0][2] = cruz[2][2] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // Exibe as habilidades
    printf("\nHabilidade - Cone:\n");
    exibirMatriz(cone);

    printf("\nHabilidade - Cruz:\n");
    exibirMatriz(cruz);

    printf("\nHabilidade - Octaedro:\n");
    exibirMatriz(octaedro);
}

// Função principal
int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    return 0;
}
