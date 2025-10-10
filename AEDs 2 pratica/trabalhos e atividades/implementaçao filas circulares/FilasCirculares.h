#ifndef _H_FILA
#define _H_FILA

// DEFINIÇÕES GLOBAIS
#define MAX 10 // Tamanho máximo do vetor da fila

// ESTRUTURA DA FILA CIRCULAR
typedef struct { 
    int itens[MAX]; 
    int inicio;
    int fim;
    int contador; // Para controlar o número de elementos
} FilaCircular; 

// PROTÓTIPOS DAS FUNÇÕES
void criaFila(FilaCircular *f);
int filaCheia(FilaCircular *f);
int filaVazia(FilaCircular *f);
void enfileirar(FilaCircular *f, int valor);
int desenfileirar(FilaCircular *f);
void exibirFila(FilaCircular *f);
int obterTamanho(FilaCircular *f);

#endif // _H_FILA
