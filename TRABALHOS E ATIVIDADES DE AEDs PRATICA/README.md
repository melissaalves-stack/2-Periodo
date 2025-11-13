# 📚 Algoritmos e Estruturas de Dados - Prática

Repositório contendo implementações práticas de algoritmos e estruturas de dados desenvolvidas durante as aulas de AEDs (Algoritmos e Estruturas de Dados).

## 📋 Conteúdo

### 🔢 Algoritmos de Ordenação

#### Algoritmos Básicos (O(n²))
* **Bubble Sort**: Algoritmo de ordenação por comparação e troca de elementos adjacentes
* **Selection Sort**: Ordenação por seleção do menor elemento
* **Insertion Sort**: Ordenação por inserção em posição adequada

#### Algoritmos Ótimos (O(n log n))
* **Merge Sort**: Ordenação por divisão e conquista com merge
* **Quick Sort**: Ordenação por particionamento com pivô
* **Heap Sort**: Ordenação utilizando estrutura de heap

#### Algoritmos de Tempo Linear
* **Counting Sort**: Ordenação por contagem (O(n + k))
* **Radix Sort**: Ordenação por dígitos (O(d × n))
* **Bucket Sort**: Ordenação por baldes (O(n + k))

### 📊 Estruturas de Dados Lineares

#### Listas
* **Lista Encadeada Simples**: Implementação completa com operações de inserção, remoção e busca
* **Lista Duplamente Encadeada**: Lista com ponteiros bidirecionais para navegação

#### Filas
* **Fila Circular**: Implementação eficiente usando array circular
* **Fila com Apontadores**: Implementação usando ponteiros

#### Filas de Prioridade
* **Vetor Ordenado**: Implementação com inserção ordenada (O(n)) e remoção rápida
* **Lista Encadeada Ordenada**: Lista ordenada por prioridade com remoção O(1)
* **Lista Não Ordenada**: Inserção O(1) com busca linear na remoção O(n)
* **Comparação de Performance**: Análise experimental dos tempos de execução

#### Pilhas
* **Pilha com Lista Encadeada**: Estrutura LIFO (Last In, First Out) usando ponteiros

### 🌳 Estruturas de Dados Não-Lineares

#### Árvores Binárias
* **Operações Básicas**: Inserção, busca e remoção
* **Percursos**:
  * In-order (em ordem)
  * Pre-order (pré-ordem)
  * Post-order (pós-ordem)
* **Balanceamento**: Algoritmo para balancear árvores binárias

#### Árvores AVL
* **Rotações**: Implementação de rotações simples e duplas
* **Balanceamento Automático**: Manutenção do fator de balanceamento
* **Remoção com Rebalanceamento**: Remoção de nós mantendo propriedades AVL

## 🎯 Trabalhos do Semestre

### Trabalho 1: Análise de Palíndromos
Implementação de algoritmos para verificação e análise de palíndromos, explorando conceitos de:
* Manipulação de strings
* Estruturas de dados auxiliares (pilhas/filas)
* Análise de complexidade
* Otimização de algoritmos

### Trabalho 2: Ordenação em Memória Secundária
Desenvolvimento de algoritmos de ordenação externa para manipulação de grandes volumes de dados que não cabem na memória principal:
* Ordenação externa com merge
* Gestão de arquivos temporários
* Otimização de I/O
* Análise de performance com diferentes tamanhos de buffer

## 🛠️ Compilação e Execução

Cada projeto possui seu próprio Makefile para facilitar a compilação:

```bash
# Compilar o projeto
make

# Executar (para projetos com target run)
make run

# Limpar arquivos compilados
make clean
```

### Estrutura dos Makefiles
Todos os projetos seguem uma estrutura padronizada:
* **Compilador**: GCC
* **Flags**: `-Wall -g -pedantic`
* **Compilação automática** de todos os arquivos `.c` e `.h`

## 📁 Estrutura do Repositório

```
TRABALHOS E ATIVIDADES DE AEDs PRATICA/
├── atividade de algoritmos de ordenação/
├── atividade de algoritmos de ordenação ótimos/
├── atividade de algoritmos de ordenação de tempo linear/
├── atividade de listas/
├── atividade de listas duplamente encadeadas/
├── atividade de filas circulares/
├── atividade de filas com apontadores/
├── atividade de filas de prioridade/
├── atividade de pilhas/
├── atividade de percurso em arvores binarias/
├── atividade de remoção em arvores binarias/
├── atividade de balanceamento de uma arvore binaria/
├── atividade de rotação na arvore binaria avl/
├── atividade de remoção na arvore binaria avl/
├── trabalho 1 - palindromos/
└── trabalho 2 - ordenação em memoria secundaria/
```

## 💡 Características dos Códigos

* ✅ Código documentado em português
* ✅ Implementações completas e funcionais
* ✅ Separação entre interface (`.h`) e implementação (`.c`)
* ✅ Menus interativos para teste das estruturas
* ✅ Gerenciamento adequado de memória
* ✅ Análise de complexidade implementada
* ✅ Testes de performance para algoritmos de ordenação
* ✅ Comparação experimental de estruturas de dados

## 🎯 Objetivos de Aprendizado

Este repositório demonstra compreensão de:
* Estruturas de dados fundamentais
* Alocação dinâmica de memória
* Ponteiros e referências
* Recursividade
* Complexidade de algoritmos (Big O, Omega, Theta)
* Modularização de código
* Algoritmos de ordenação e suas aplicações
* Ordenação interna vs. externa
* Manipulação de arquivos em C
* Otimização de performance
* Trade-offs entre diferentes implementações

## 📊 Análise de Complexidade

### Algoritmos de Ordenação Implementados

| Algoritmo | Melhor Caso | Caso Médio | Pior Caso | Espaço | Estável |
|-----------|-------------|------------|-----------|--------|---------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | ❌ |
| Counting Sort | O(n + k) | O(n + k) | O(n + k) | O(k) | ✅ |
| Radix Sort | O(d × n) | O(d × n) | O(d × n) | O(n + k) | ✅ |
| Bucket Sort | O(n + k) | O(n + k) | O(n²) | O(n) | ✅ |

### Filas de Prioridade Implementadas

| Implementação | Inserção | Remoção | Espaço | Melhor Para |
|---------------|----------|---------|--------|-------------|
| Vetor Ordenado | O(n) | O(n) | O(n) | Poucas operações |
| Lista Encadeada Ordenada | O(n) | O(1) | O(n) | Muitas remoções |
| Lista Não Ordenada | O(1) | O(n) | O(n) | Muitas inserções |
| Heap (futuro) | O(log n) | O(log n) | O(n) | Balanceado |

**Observação**: A implementação com Heap será abordada em aulas futuras e oferece o melhor trade-off entre inserção e remoção.

## 📝 Notas

* Todos os códigos foram desenvolvidos em **C**
* Os programas incluem **menus interativos** para facilitar o teste
* Cada estrutura de dados possui operações básicas implementadas (inserir, remover, buscar, imprimir)
* Trabalhos incluem **documentação técnica** e análise de resultados
* Implementações de ordenação incluem **comparação de performance**
* Filas de prioridade incluem **análise experimental** comparando as três implementações

## 🤝 Contribuições

Este é um repositório educacional. Sugestões e melhorias são bem-vindas!

---

**Disciplina**: Algoritmos e Estruturas de Dados (AEDs) - Prática  
**Linguagem**: C  
**Compilador**: GCC  
**Período**: 2º Semestre

⭐ Se este repositório foi útil para seus estudos, considere dar uma estrela!
