#ifndef FILA_H
#define FILA_H

#define TAMANHO_MAXIMO 5

typedef struct {
    int dados[TAMANHO_MAXIMO];
    int inicio;
    int fim;
    int tamanho;
} Fila;

void inicializar_fila(Fila *fila);
int esta_vazia(Fila *fila);
int esta_cheia(Fila *fila);
int inserir_fim(Fila *fila, int valor);
int remover_inicio(Fila *fila, int *valor);
int consultar_inicio(Fila *fila, int *valor);

#endif
