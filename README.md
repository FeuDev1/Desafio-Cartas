# 🃏 Super Trunfo - Comparador de Cartas (Projeto em C)

Este projeto implementa um jogo simples de **Super Trunfo** em linguagem **C**, onde o jogador pode comparar duas cartas de países com base em dois atributos numéricos à escolha. O jogo utiliza menus interativos, estruturas de decisão (`switch`, `if-else`) e operador ternário.

---

## 🔧 Como compilar

Use o GCC (GNU Compiler Collection) para compilar o código.

```bash
gcc super_trunfo.c -o super_trunfo

▶️ Como executar
Depois de compilado, execute o programa no terminal:

bash
Copiar
Editar
./super_trunfo

🗂️ Atributos disponíveis para comparação
Código	Atributo	Regra de Vitória
1	População	Vence o maior valor
2	Área	Vence o maior valor
3	PIB	Vence o maior valor
4	Pontos Turísticos	Vence o maior valor
5	Densidade Demográfica	Vence o menor valor (exceção)

⚠️ O segundo atributo deve ser diferente do primeiro.

🧪 Exemplo de uso (menus e saídas)
Exemplo de execução:
plaintext
Copiar
Editar
==== SUPER TRUNFO - COMPARAÇÃO AVANÇADA ====
Escolha o primeiro atributo:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
Opção: 1

Escolha o segundo atributo (diferente do primeiro):
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
Opção: 5

===== RESULTADO DA COMPARAÇÃO =====
Cartas: Brasil vs Argentina

Atributo 1: População
Brasil: 215000000.00
Argentina: 46000000.00
=> Vencedor: Brasil

Atributo 2: Densidade Demográfica
Brasil: 25.24
Argentina: 16.54
=> Vencedor: Argentina

Soma dos Atributos:
Brasil: 215000025.24
Argentina: 46000016.54

Resultado Final: Brasil venceu a rodada!

🧠 Tecnologias utilizadas
Linguagem C

Compilador GCC

Terminal (entrada e saída padrão)

📌 Observações
O cadastro das cartas é fixo (pré-definido no código).

Apenas duas cartas são comparadas por vez.

O código está comentado para facilitar manutenção e aprendizagem.

Entradas inválidas são tratadas com mensagens de erro e encerramento seguro.