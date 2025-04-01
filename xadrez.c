#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula a movimentação de três peças de xadrez: Torre, Bispo e Rainha.
// Cada peça utiliza uma estrutura de repetição diferente (for, while, do-while).

int main() {
    // Nível Novato - Movimentação das Peças
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // =======================
    // Movimentação da Torre
    // =======================
    // A torre se move em linha reta. Aqui, ela se move 5 casas para a direita usando for.
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // =======================
    // Movimentação do Bispo
    // =======================
    // O bispo se move em diagonal. Aqui, simula 5 casas para cima e à direita usando while.
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
    // A rainha se move em todas as direções. Aqui, simula 8 casas para a esquerda usando do-while.
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentosRainha);

    return 0;
}
