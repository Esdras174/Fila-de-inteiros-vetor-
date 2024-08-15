#include "fila.h"

void inicializar_fila(Fila *fila) {
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
}

int esta_vazia(Fila *fila) {
    return (fila->tamanho == 0);
}

int esta_cheia(Fila *fila) {
    return (fila->tamanho == TAMANHO_MAXIMO);
}

int inserir_fim(Fila *fila, int valor) {
    if (esta_cheia(fila)) {
        return 0;
    }
    fila->dados[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % TAMANHO_MAXIMO;
    fila->tamanho++;
    return 1;
}

int remover_inicio(Fila *fila, int *valor) {
    if (esta_vazia(fila)) {
        return 0;
    }
    *valor = fila->dados[fila->inicio];
    fila->inicio = (fila->inicio + 1) % TAMANHO_MAXIMO;
    fila->tamanho--;
    return 1;
}

int consultar_inicio(Fila *fila, int *valor) {
    if (esta_vazia(fila)) {
        return 0;
    }
    *valor = fila->dados[fila->inicio];
    return 1;
}
