// BIBLIOTECAS
#include <stdio.h> 
#include <stdlib.h> 
#include "FilasCirculares.h"

// FUNÇÃO QUE INICIALIZA A FILA
void criaFila(FilaCircular *f) {
    f->inicio = 0;
    f->fim = 0;
    f->contador = 0; // O contador zero indica que a fila está vazia
}

// FUNÇÃO PARA VERIFICAR SE A FILA ESTÁ VAZIA
int filaVazia(FilaCircular *f) {
    return (f->contador == 0);
}

// FUNÇÃO PARA VERIFICAR SE A FILA ESTÁ CHEIA
int filaCheia(FilaCircular *f) {
    return (f->contador == MAX);
}

// FUNÇÃO PARA ENFILEIRAR (ENQUEUE)
void enfileirar(FilaCircular *f, int valor) {
    if (filaCheia(f)) {
        printf("\nERRO: A FILA ESTA CHEIA!\n");
        return; 
    }
    // Insere o valor na posição indicada por 'fim'
    f->itens[f->fim] = valor;
    // Avança o 'fim' de forma circular
    f->fim = (f->fim + 1) % MAX; 
    // Incrementa o contador de elementos
    f->contador++;
}

// FUNÇÃO PARA DESENFILEIRAR (DEQUEUE)
int desenfileirar(FilaCircular *f) {
    if (filaVazia(f)) {
        printf("\nERRO: A FILA ESTA VAZIA!\n");
        return -1; // Retorna um valor de erro
    }
    // Pega o valor do início da fila
    int valorRemovido = f->itens[f->inicio];
    // Avança o 'inicio' de forma circular
    f->inicio = (f->inicio + 1) % MAX; 
    // Decrementa o contador de elementos
    f->contador--;
    return valorRemovido;
}

// FUNÇÃO PARA EXIBIR A FILA (NOVA FUNCIONALIDADE)
void exibirFila(FilaCircular *f) {
    if (filaVazia(f)) {
        printf("\nA FILA ESTA VAZIA!\n");
        return;
    }
    
    printf("\nElementos da fila (do inicio ao fim): ");
    int i = f->inicio;
    for (int count = 0; count < f->contador; count++) {
        printf("%d ", f->itens[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// FUNÇÃO PARA OBTER O TAMANHO ATUAL DA FILA
int obterTamanho(FilaCircular *f) {
    return f->contador;
}

// FUNÇÃO PRINCIPAL
int main() { 
    FilaCircular fila; // Declara uma variável do tipo FilaCircular
    int valor, opcao;
    
    criaFila(&fila); // Inicializa a fila corretamente
    
    do {
        printf("\n******************* MENU FILA CIRCULAR *******************\n");
        printf("1. Enfileirar (Inserir elemento)\n");
        printf("2. Desenfileirar (Remover elemento)\n");
        printf("3. Verificar se a fila esta vazia\n");
        printf("4. Verificar se a fila esta cheia\n");
        printf("5. Exibir elementos da fila\n");
        printf("6. Mostrar tamanho atual da fila\n");
        printf("7. Sair\n");
        printf("**********************************************************\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                if (filaCheia(&fila)) {
                    printf("\nERRO: A FILA JA ESTA CHEIA!\n");
                } else {
                    printf("\nDigite o valor a ser inserido: ");
                    scanf("%d", &valor);
                    enfileirar(&fila, valor);
                    printf("\nVALOR %d INSERIDO NA FILA COM SUCESSO!\n", valor);
                }
                break;

            case 2:
                if (filaVazia(&fila)) {
                    printf("\nERRO: A FILA JA ESTA VAZIA!\n");
                } else {
                    valor = desenfileirar(&fila);
                    printf("\nELEMENTO RETIRADO: %d\n", valor);
                }
                break;

            case 3:
                if (filaVazia(&fila)) {
                    printf("\nSIM, A FILA ESTA VAZIA!\n");
                } else {
                    printf("\nNAO, A FILA NAO ESTA VAZIA. Ela contem %d elemento(s).\n", fila.contador);
                }    
                break;

            case 4:
                if (filaCheia(&fila)) {
                    printf("\nSIM, A FILA ESTA CHEIA!\n");
                } else {
                    printf("\nNAO, A FILA NAO ESTA CHEIA. Ela contem %d elemento(s) de %d.\n", fila.contador, MAX);
                }    
                break; 

            case 5:
                exibirFila(&fila);
                break;

            case 6:
                printf("\nTamanho atual da fila: %d elemento(s)\n", obterTamanho(&fila));
                break;

            case 7:
                printf("\nEncerrando o programa...\n");
                break;
            
            default: 
                printf("\nOPCAO INVALIDA, TENTE NOVAMENTE!\n");
        }
    } while (opcao != 7); // Corrigido para a nova opção de saída

    return 0;
}
