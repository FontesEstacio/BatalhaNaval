# Batalha Naval - Desafios em C

Projeto de implementação do jogo Batalha Naval em C, dividido em três níveis de complexidade crescente.

## 📁 Estrutura do Projeto

```
BatalhaNaval/
├── src/              # Códigos-fonte dos desafios
│   ├── novato.c      # Nível 1: Básico
│   ├── aventureiro.c # Nível 2: Intermediário
│   └── mestre.c      # Nível 3: Avançado
└── Exemplos/         # Exemplos de código auxiliares
```

## 🎯 Níveis de Desafio

### Nível 1: Novato
**Arquivo:** `src/novato.c`

**Objetivo:** Implementação básica do tabuleiro e posicionamento de navios.

**Características:**
- Tabuleiro 10x10 inicializado com água (0)
- Posicionamento de 2 navios (tamanho 3):
  - 1 navio horizontal
  - 1 navio vertical
- Exibição do tabuleiro com coordenadas (letras A-J para colunas, números 1-10 para linhas)
- Representação: 0 = água, 3 = navio

**Conceitos aplicados:**
- Matrizes bidimensionais
- Loops aninhados
- Inicialização de arrays

---

### Nível 2: Aventureiro
**Arquivo:** `src/aventureiro.c`

**Objetivo:** Adicionar navios diagonais e validações.

**Características:**
- Tabuleiro 10x10 completo
- Posicionamento de 4 navios (tamanho 3):
  - 1 navio horizontal
  - 1 navio vertical
  - 2 navios diagonais (principal e secundário)
- Validação de limites do tabuleiro
- Validação de sobreposição entre navios
- Exibição completa com informações dos navios

**Conceitos aplicados:**
- Validação de limites
- Detecção de sobreposição
- Manipulação de diagonais em matrizes
- Estruturas condicionais

---

### Nível 3: Mestre
**Arquivo:** `src/mestre.c`

**Objetivo:** Implementar habilidades especiais com áreas de efeito.

**Características:**
- Tabuleiro 10x10 com navios do nível anterior
- 3 habilidades especiais com áreas de efeito:
  - **Cone:** Formato triangular apontando para baixo
  - **Cruz:** Formato de cruz (linha e coluna central)
  - **Octaedro:** Formato losango (vista frontal)
- Matrizes de habilidade 5x5 construídas dinamicamente
- Sobreposição de habilidades no tabuleiro
- Representação: 0 = água, 3 = navio, 5 = área de habilidade

**Conceitos aplicados:**
- Construção dinâmica de matrizes com condicionais
- Cálculo de áreas de efeito
- Sobreposição de matrizes
- Algoritmos geométricos (cone, cruz, losango)

---

## 🚀 Compilação e Execução

### Compilar
```bash
gcc src/novato.c -o novato.exe
gcc src/aventureiro.c -o aventureiro.exe
gcc src/mestre.c -o mestre.exe
```

### Executar
```bash
./novato.exe
./aventureiro.exe
./mestre.exe
```

## 📊 Saída do Programa

Todos os níveis exibem:
- Tabuleiro formatado com coordenadas (A-J, 1-10)
- Valores numéricos representando o estado de cada posição
- Informações sobre navios e habilidades posicionadas

**Legenda:**
- `0` = Água
- `3` = Navio
- `5` = Área afetada por habilidade

## 💡 Exemplos de Código

A pasta `Exemplos/` contém arquivos auxiliares demonstrando:
- Manipulação de vetores
- Trabalho com matrizes
- Busca e contagem em matrizes
- Manipulação condicional de elementos

## 📝 Notas

- Todos os navios têm tamanho fixo de 3 posições
- Coordenadas são definidas diretamente no código

## 🎓 Aprendizados

Este projeto desenvolve habilidades em:
- Manipulação de matrizes bidimensionais
- Algoritmos de posicionamento e validação
- Construção de formas geométricas em matrizes
- Organização e estruturação de código em C