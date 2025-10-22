# 📚 Algoritmos e Estruturas de Dados - Prática

Repositório contendo implementações práticas de algoritmos e estruturas de dados desenvolvidas durante as aulas de AEDs (Algoritmos e Estruturas de Dados).

## 📋 Conteúdo

### 🔢 Algoritmos de Ordenação
- **Bubble Sort**: Algoritmo de ordenação por comparação e troca de elementos adjacentes
- **Selection Sort**: Ordenação por seleção do menor elemento
- **Insertion Sort**: Ordenação por inserção em posição adequada

### 📊 Estruturas de Dados Lineares

#### Listas
- **Lista Encadeada Simples**: Implementação completa com operações de inserção, remoção e busca
- **Lista Duplamente Encadeada**: Lista com ponteiros bidirecionais para navegação

#### Filas
- **Fila Circular**: Implementação eficiente usando array circular
- **Fila com Apontadores**: Implementação usando ponteiros

#### Pilhas
- **Pilha com Lista Encadeada**: Estrutura LIFO (Last In, First Out) usando ponteiros

### 🌳 Estruturas de Dados Não-Lineares

#### Árvores Binárias
- **Operações Básicas**: Inserção, busca e remoção
- **Percursos**: 
  - In-order (em ordem)
  - Pre-order (pré-ordem)
  - Post-order (pós-ordem)
- **Balanceamento**: Algoritmo para balancear árvores binárias

#### Árvores AVL
- **Rotações**: Implementação de rotações simples e duplas
- **Balanceamento Automático**: Manutenção do fator de balanceamento
- **Remoção com Rebalanceamento**: Remoção de nós mantendo propriedades AVL

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
- Compilador: GCC
- Flags: `-Wall -g -pedantic`
- Compilação automática de todos os arquivos `.c` e `.h`

## 📁 Estrutura do Repositório

```
TRABALHOS E ATIVIDADES DE AEDs PRATICA/
├── atividade de algoritmos de ordenação/
├── atividade de listas/
├── atividade de listas duplamente encadeadas/
├── atividade de filas circulares/
├── atividade de filas com apontadores/
├── atividade de pilhas/
├── atividade de percurso em arvores binarias/
├── atividade de remoção em arvores binarias/
├── atividade de balanceamento de uma arvore binaria/
├── atividade de rotação na arvore binaria avl/
└── atividade de remoção na arvore binaria avl/
```

## 💡 Características dos Códigos

- ✅ Código documentado em português
- ✅ Implementações completas e funcionais
- ✅ Separação entre interface (`.h`) e implementação (`.c`)
- ✅ Menus interativos para teste das estruturas
- ✅ Gerenciamento adequado de memória

## 📖 Como Usar

1. Clone o repositório:
```bash
git clone [URL_DO_REPOSITORIO]
```

2. Navegue até o diretório do projeto desejado:
```bash
cd "atividade de listas"
```

3. Compile o projeto:
```bash
make
```

4. Execute o programa:
```bash
./[nome_do_executavel]
```

## 🎯 Objetivos de Aprendizado

Este repositório demonstra compreensão de:
- Estruturas de dados fundamentais
- Alocação dinâmica de memória
- Ponteiros e referências
- Recursividade
- Complexidade de algoritmos
- Modularização de código

## 📝 Notas

- Todos os códigos foram desenvolvidos em C
- Os programas incluem menus interativos para facilitar o teste
- Cada estrutura de dados possui operações básicas implementadas (inserir, remover, buscar, imprimir)

## 🤝 Contribuições

Este é um repositório educacional. Sugestões e melhorias são bem-vindas!

---

**Disciplina**: Algoritmos e Estruturas de Dados (AEDs) - Prática  
**Linguagem**: C  
**Compilador**: GCC
