# ♟️ Desafio Xadrez - MateCheck

Este projeto simula a movimentação de peças de xadrez em linguagem C, utilizando estruturas de repetição, recursividade e lógica de programação. É dividido em níveis de complexidade crescente, do básico ao avançado, e segue os requisitos da atividade proposta pela equipe MateCheck.

## 📚 Descrição do Projeto

Durante o desenvolvimento, as seguintes peças e comportamentos foram simulados:

- **Torre**: Movimenta-se 5 casas para a direita (usando recursividade).
- **Bispo**: Movimenta-se 5 casas na diagonal superior direita (com recursão e loops aninhados).
- **Rainha**: Movimenta-se 8 casas para a esquerda (usando recursividade).
- **Cavalo**:
  - Nível intermediário: 2 casas para baixo e 1 para a esquerda (usando loops aninhados simples).
  - Nível avançado: 2 casas para cima e 1 para a direita, simulando o "L" clássico (usando loops aninhados com múltiplas variáveis, `break` e `continue`).

---

## ⚙️ Como Executar

1. **Clone o repositório**:

   git clone https://github.com/Cursos-TI/desafio-xadrez-bclelis

   cd desafio-xadrez-bclelis
3. **Compile o código com GCC**:

   gcc xadrez.c -o xadrez
5. **Execute o programa**:

   ./xadrez

## 🧠 Tecnologias e Conceitos Aplicados

- Linguagem C
- Estruturas de repetição: `for`, `while`, `do-while`
- Recursividade
- Loops aninhados
- Controle de fluxo: `if`, `break`, `continue`
- Boas práticas de documentação e legibilidade

---

## 🗂️ Estrutura do Código

// Funções recursivas:

// - moverTorre()

// - moverRainha()

// - moverBispo()


// Lógica do Cavalo:

// - Movimento com loops aninhados, múltiplas variáveis e controle com break/continue


// Bispo também com simulação via loop aninhado vertical/horizontal

## ✨ Exemplo de Saída

Movimento da Torre (5 casas para a Direita):
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo (5 casas na Diagonal Cima Direita - Recursivo):
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

Movimento da Rainha (8 casas para a Esquerda):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo (2 casas para Cima e 1 para Direita):
Cima
Cima
Direita

Movimento do Bispo (5 casas na Diagonal Cima Direita - Loops Aninhados):
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

