#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Simula a movimentação de Torre, Bispo, Rainha e Cavalo no tabuleiro
// Cada peça usa estruturas de repetição diferentes

int main() {
    // Declaração de constantes para os movimentos
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;
    const int movimentosBaixo = 2;   // Cavalo
    const int movimentosEsquerda = 1; // Cavalo

    // =======================
    // Movimentação da Torre
    // =======================
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // =======================
    // Movimentação do Bispo
    // =======================
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    int j = 1;
    while (j <= movimentosBispo) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // =======================
    // Movimentação da Rainha
    // =======================
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentosRainha);

    printf("\n");

    // =======================
    // Movimentação do Cavalo
    // =======================
    // O Cavalo se move em "L": 2 casas para Baixo + 1 casa para Esquerda
    // Usamos um loop for para o movimento vertical e um loop while aninhado para o movimento horizontal

    printf("Movimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
        int passo = 0;

        // Loop aninhado opcional (poderia ser parte fora do for também)
        // Neste caso, o movimento da esquerda ocorre uma única vez
        while (passo == 0 && i == movimentosBaixo - 1) {
            printf("Esquerda\n");
            passo++;
        }
    }

    return 0;
}
