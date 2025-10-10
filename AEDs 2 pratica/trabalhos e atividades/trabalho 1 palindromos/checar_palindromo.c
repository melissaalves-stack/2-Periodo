//TRABALHO 1 (PALINDROMOS)
//POR MELISSA ALVES, JULIA ROCHA E MELL DIAS

//BIBLIOTECAS
#include <stdio.h>   // BIBILOTECA PADRAO DE ENTRADA E SAIDA
#include <stdlib.h>  // BIBILOTECA PADRAO DE FUNCOES
#include <string.h>  // BIBILOTECA PADRAO DE MANIPULACAO DE STRINGS
#include <ctype.h>   // BIBILOTECA PADRAO DE MANIPULACAO DE CARACTERES

//ESTRUTURA DA PILHA
typedef struct Node {     // NÓ DA PILHA
    char data;            // DADO DO NÓ
    struct Node* next;    // PONTEIRO PARA O PRÓXIMO NÓ
} Node;                   // FIM DA ESTRUTURA DO NÓ

typedef struct {          // PILHA
    Node* top;            // TOPO DA PILHA
    int size;             // TAMANHO DA PILHA
} Stack;                  // FIM DA ESTRUTURA DA PILHA

// FUNÇAO PARA CRIAR UMA PILHA VAZIA
Stack* createStack() {                              // CRIA UMA PILHA VAZIA
    Stack* stack = (Stack*)malloc(sizeof(Stack));   // ALOCA MEMORIA PARA A PILHA
    stack->top = NULL;                              // INICIALIZA O TOPO DA PILHA COMO NULO       
    stack->size = 0;                                // INICIALIZA O TAMANHO DA PILHA COMO 0  
    return stack;                                   // RETORNA A PILHA CRIADA   
}

// Função para verificar se a pilha está vazia      
int isEmpty(Stack* stack) {        // VERIFICA SE A PILHA ESTA VAZIA
    return stack->top == NULL;     // RETORNA 1 SE A PILHA ESTA VAZIA E 0 SE NAO ESTA VAZIA
}

// Função para empilhar um elemento
void push(Stack* stack, char data) {                // EMPILHA UM ELEMENTO NA PILHA
    Node* newNode = (Node*)malloc(sizeof(Node));    // ALOCA MEMORIA PARA O NOVO NÓ
    newNode->data = data;                           // ATRIBUI O DADO AO NOVO NÓ    
    newNode->next = stack->top;                     // O NOVO NÓ APONTA PARA O TOPO ATUAL DA PILHA
    stack->top = newNode;                           // O TOPO DA PILHA AGORA É O NOVO NÓ
    stack->size++;                                  // INCREMENTA O TAMANHO DA PILHA
}

// Função para desempilhar um elemento
char pop(Stack* stack) {               // DESEMPILHA UM ELEMENTO DA PILHA
    if (isEmpty(stack)) {              // VERIFICA SE A PILHA ESTA VAZIA
        return '\0';                   // RETORNA NULO SE A PILHA ESTA VAZIA
    }
    Node* temp = stack->top;           // ARMAZENA O TOPO ATUAL DA PILHA
    char data = temp->data;            // ARMAZENA O DADO DO TOPO DA PILHA
    stack->top = stack->top->next;     // O TOPO DA PILHA AGORA É O PROXIMO NÓ
    free(temp);                        // LIBERA A MEMORIA DO NÓ DESEMPILHADO
    stack->size--;                     // DECREMENTA O TAMANHO DA PILHA
    return data;                       // RETORNA O DADO DO NÓ DESEMPILHADO
}

// Função para liberar a memória da pilha
void freeStack(Stack* stack) {    // LIBERA A MEMORIA DA PILHA
    while (!isEmpty(stack)) {     // ENQUANTO A PILHA NAO ESTIVER VAZIA
        pop(stack);               // DESEMPILHA TODOS OS ELEMENTOS DA PILHA
    }        
    free(stack);                  // LIBERA A MEMORIA DA PILHA
}

// Função para remover acentos e converter para minúscula
char normalizeChar(char c) {   // NORMALIZA O CARACTERE
    c = tolower(c);            // CONVERTE O CARACTERE PARA MINUSCULO
    
    // Remove acentos comuns
    switch(c) {
        case 'á': case 'à': case 'ã': case 'â': case 'ä': // 'a' com acento vira apenas 'a'
            return 'a';
        case 'é': case 'è': case 'ê': case 'ë':           // 'e' com acento vira apenas 'e'
            return 'e';
        case 'í': case 'ì': case 'î': case 'ï':           // 'i' com acento vira apenas 'i'
            return 'i';
        case 'ó': case 'ò': case 'õ': case 'ô': case 'ö': // 'o' com acento vira apenas 'o'
            return 'o';
        case 'ú': case 'ù': case 'û': case 'ü':           // 'u' com acento vira apenas 'u'
            return 'u';
        case 'ç':                                         // 'c' com cedilha vira apenas 'c'
            return 'c';
        case 'ñ':                                         // 'n' com til vira apenas 'n'
            return 'n';
        default:                                          // Outros caracteres permanecem inalterados
            return c;
    }
}

// Função para verificar se um caractere é válido (letra ou número)
int isValidChar(char c) {  // VERIFICA SE O CARACTERE E VALIDO (LETRA OU NUMERO)
    return isalnum(c);     // RETORNA 1 SE O CARACTERE E VALIDO E 0 SE NAO E VALIDO
}

// Função para processar a string e extrair apenas caracteres válidos
char* processString(const char* input, int* length) {           // PROCESSA A STRING E EXTRAI APENAS CARACTERES VALIDOS
    int len = strlen(input);                                    // OBTEM O TAMANHO DA STRING DE ENTRADA
    char* processed = (char*)malloc((len + 1) * sizeof(char));  // ALOCA MEMORIA PARA A STRING PROCESSADA
    int j = 0;                                                  // INDICE PARA A STRING PROCESSADA
    
    for (int i = 0; i < len; i++) {           // PERCORRE CADA CARACTERE DA STRING DE ENTRADA
        char c = normalizeChar(input[i]);     // NORMALIZA O CARACTERE
        if (isValidChar(c)) {                 // VERIFICA SE O CARACTERE E VALIDO
            processed[j++] = c;               // ADICIONA O CARACTERE VALIDO NA STRING PROCESSADA
        }
    }
    processed[j] = '\0';   // ADICIONA O TERMINADOR DE STRING
    *length = j;           // ATUALIZA O TAMANHO DA STRING PROCESSADA
    return processed;      // RETORNA A STRING PROCESSADA
}

// Função principal para verificar se uma string é palíndromo
int isPalindrome(const char* input) {                          // VERIFICA SE A STRING E PALINDROMO
    int processedLength;                                       // VARIAVEL PARA O TAMANHO DA STRING PROCESSADA
    char* processed = processString(input, &processedLength);  // PROCESSA A STRING DE ENTRADA
    
    // String vazia ou com 1 caractere é palíndromo
    if (processedLength <= 1) {    // VERIFICA SE A STRING PROCESSADA E VAZIA OU TEM 1 CARACTERE
        free(processed);           // LIBERA A MEMORIA DA STRING PROCESSADA
        return 1;                  // RETORNA 1 (E VAZIA E PALINDROMO)
    }
    
    Stack* stack = createStack();        // CRIA UMA PILHA VAZIA
    int middle = processedLength / 2;    // CALCULA O INDICE DO MEIO DA STRING PROCESSADA
    
    // Empilha a primeira metade
    for (int i = 0; i < middle; i++) {   // PERCORRE A PRIMEIRA METADE DA STRING PROCESSADA
        push(stack, processed[i]);       // EMPILHA CADA CARACTERE NA PILHA
    }
    
    // Define o índice de início da segunda metade
    int startIndex = (processedLength % 2 == 0) ? middle : middle + 1;  // SE O TAMANHO FOR PAR, COMEÇA DO MEIO; SE FOR IMPAR, PULA O CARACTERE DO MEIO
    
    // Compara a segunda metade com a pilha
    for (int i = startIndex; i < processedLength; i++) {      // PERCORRE A SEGUNDA METADE DA STRING PROCESSADA
        if (isEmpty(stack) || pop(stack) != processed[i]) {   // SE A PILHA ESTIVER VAZIA OU O CARACTERE DESEMPILHADO FOR DIFERENTE DO CARACTERE ATUAL
            freeStack(stack);                                 // LIBERA A MEMORIA DA PILHA
            free(processed);                                  // LIBERA A MEMORIA DA STRING PROCESSADA
            return 0;                                         // RETORNA 0 (NAO E PALINDROMO)
        }
    }
    
    // Verifica se a pilha foi completamente esvaziada
    int result = isEmpty(stack) ? 1 : 0;   // SE A PILHA ESTIVER VAZIA, RETORNA 1 (E PALINDROMO); SE NAO, RETORNA 0 (NAO E PALINDROMO)
    
    freeStack(stack);                      // LIBERA A MEMORIA DA PILHA
    free(processed);                       // LIBERA A MEMORIA DA STRING PROCESSADA
    return result;                         // RETORNA O RESULTADO
}

// Função para processar arquivo de entrada
void processFile(const char* filename) {                    // PROCESSA O ARQUIVO DE ENTRADA
    FILE* file = fopen(filename, "r");                      // ABRE O ARQUIVO DE ENTRADA PARA LEITURA
    if (file == NULL) {                                     // VERIFICA SE O ARQUIVO FOI ABERTO COM SUCESSO
        printf("Erro ao abrir o arquivo %s\n", filename);   // MENSAGEM DE ERRO AO ABRIR O ARQUIVO
        return;                                             // RETORNA DA FUNCAO
    }
    
    char line[1000];
    printf("Entrada,Saída\n");                     // CABEÇALHO DO CSV
    
    while (fgets(line, sizeof(line), file)) {      // LÊ CADA LINHA DO ARQUIVO
        line[strcspn(line, "\n")] = '\0';          // REMOVE A QUEBRA DE LINHA DA STRING
        
        // Ignora linhas vazias
        if (strlen(line) == 0) {                   // VERIFICA SE A LINHA ESTA VAZIA E A IGNORA
            continue;                              // CONTINUA PARA A PROXIMA ITERACAO
        }
        
        int result = isPalindrome(line);           // VERIFICA SE A LINHA E PALINDROMO
        printf("%s,%d\n", line, result);           // IMPRIME A LINHA E O RESULTADO (1 PARA PALINDROMO, 0 PARA NAO PALINDROMO)
    }
    
    fclose(file);                                  // FECHA O ARQUIVO DE ENTRADA
}

int main(int argc, char* argv[]) {                           // FUNCAO PRINCIPAL
    if (argc != 2) {                                         // VERIFICA SE O NUMERO DE ARGUMENTOS ESTA CORRETO
        printf("Uso: %s <arquivo_de_entrada>\n", argv[0]);   // MENSAGEM DE USO DO PROGRAMA
        printf("Exemplo: %s entrada.txt\n", argv[0]);        // EXEMPLO DE USO DO PROGRAMA
        return 1;                                            // RETORNA 1 (ERRO)
    }
    
    processFile(argv[1]);                                    // PROCESSA O ARQUIVO DE ENTRADA
    return 0;                                                // RETORNA 0 (SUCESSO)
}