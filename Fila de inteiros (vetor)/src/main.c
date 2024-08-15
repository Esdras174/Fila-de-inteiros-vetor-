#include <stdio.h>
#include "fila.h"

int main() {
    Fila fila;
    inicializar_fila(&fila);

    // Teste: Inserir elementos na fila
    for (int i = 1; i <= 5; i++) {
        if (inserir_fim(&fila, i)) {
            printf("Inserido: %d\n", i);
        } else {
            printf("Fila cheia ao tentar inserir: %d\n", i);
        }
    }

    // Teste: Consultar início da fila
    int inicio;
    if (consultar_inicio(&fila, &inicio)) {
        printf("Início da fila: %d\n", inicio);
    } else {
        printf("Fila vazia ao tentar consultar o início.\n");
    }

    // Teste: Remover elementos da fila
    int valor_removido;
    for (int i = 0; i < 3; i++) {
        if (remover_inicio(&fila, &valor_removido)) {
            printf("Removido: %d\n", valor_removido);
        } else {
            printf("Fila vazia ao tentar remover.\n");
        }
    }

    // Teste: Inserir novamente para verificar incremento circular
    if (inserir_fim(&fila, 6)) {
        printf("Inserido: 6\n");
    } else {
        printf("Fila cheia ao tentar inserir: 6\n");
    }

    return 0;
}



