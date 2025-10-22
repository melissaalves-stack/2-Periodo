#ifndef _H_ARVORE
#define _H_ARVORE

struct node {
    int valor;
    struct node *esquerda, *direita;
};

struct node* novo_no(int item);
struct node* inserir(struct node* node, int valor);
struct node* buscar(struct node* root, int valor);

// Funções de percurso
void percurso_em_ordem(struct node* root);
void percurso_pre_ordem(struct node* root);
void percurso_pos_ordem(struct node* root);

#endif // _H_ARVORE