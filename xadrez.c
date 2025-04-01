#include <stdio.h>

// Autor: Brenda Lelis
// Projeto: Desafio MateCheck - Movimentos Complexos de Xadrez
// Objetivo: Usar recursividade e loops aninhados para simular movimentos avançados das peças

// =========================
// Funções Recursivas
// =========================

// Torre: 5 casas para a Direita
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Rainha: 8 casas para a Esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Bispo: Diagonal para Cima Direita (5 casas) — com recursividade
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispo(casasRestantes - 1);
}

// =========================
// Função Principal
// =========================

int main() {
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // =======================
    // Torre com Recursão
    // =======================
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(movimentosTorre);

    printf("\n");

    // =======================
    // Bispo com Recursão
    // =======================
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita - Recursivo):\n");
    moverBispo(movimentosBispo);

    printf("\n");

    // =======================
    // Rainha com Recursão
    // =======================
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(movimentosRainha);

    printf("\n");

    // =======================
    // Cavalo com Loops Complexos
    // =======================
    // Movimento: 2 casas para CIMA e 1 para a DIREITA
    // Usando loops aninhados com múltiplas variáveis e controle com continue/break
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");
    int passosRealizados = 0;

    for (int i = 2; i > 0; i--) {  // movimento para cima
        if (i % 2 == 0) {
            printf("Cima\n");
        } else {
            printf("Cima\n");
        }

        for (int j = 0; j < 1; j++) {  // movimento para direita (só uma vez)
            if (i == 1) {
                printf("Direita\n");
                break; // sair após completar o "L"
            } else {
                continue; // ainda não é hora de mover na horizontal
            }
        }

        passosRealizados++;
        if (passosRealizados == 2) break;
    }

    printf("\n");

    // =======================
    // Bispo com Loops Aninhados
    // =======================
    // Loop externo: vertical (Cima)
    // Loop interno: horizontal (Direita)
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita - Loops Aninhados):\n");
    for (int vertical = 1; vertical <= 5; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n"); // combinação das duas direções
        }
    }

    return 0;
}
