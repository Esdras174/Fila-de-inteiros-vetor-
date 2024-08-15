#include <stdio.h>
#include "fila.h"

void testar_inicializacao() {
    Fila fila;
    inicializar_fila(&fila);
    if (esta_vazia(&fila)) {
        printf("Teste inicialização: PASSOU\n");
    } else {
        printf("Teste inicialização: FALHOU\n");
    }
}

void testar_inserir_remover() {
    Fila fila;
    inicializar_fila(&fila);

    for (int i = 1; i <= 5; i++) {
        if (!inserir_fim(&fila, i)) {
            printf("Teste inserir: FALHOU\n");
            return;
        }
    }

    int valor;
    for (int i = 1; i <= 5; i++) {
        if (!remover_inicio(&fila, &valor) || valor != i) {
            printf("Teste remover: FALHOU\n");
            return;
        }
    }

    printf("Teste inserir e remover: PASSOU\n");
}

void testar_fila_cheia_vazia() {
    Fila fila;
    inicializar_fila(&fila);

    if (esta_cheia(&fila)) {
        printf("Teste fila cheia (inicial): FALHOU\n");
        return;
    }

    for (int i = 0; i < TAMANHO_MAXIMO; i++) {
        inserir_fim(&fila, i);
    }

    if (!esta_cheia(&fila)) {
        printf("Teste fila cheia (depois de encher): FALHOU\n");
        return;
    }

    if (esta_vazia(&fila)) {
        printf("Teste fila vazia (depois de encher): FALHOU\n");
        return;
    }

    printf("Teste fila cheia e vazia: PASSOU\n");
}

void testar_consultar_inicio() {
    Fila fila;
    inicializar_fila(&fila);

    int inicio;

    if (consultar_inicio(&fila, &inicio)) {
        printf("Teste consultar (vazia): FALHOU\n");
        return;
    }

    inserir_fim(&fila, 10);

    if (!consultar_inicio(&fila, &inicio) || inicio != 10) {
        printf("Teste consultar (com elemento): FALHOU\n");
        return;
    }

    printf("Teste consultar início: PASSOU\n");
}

int main() {
    testar_inicializacao();
    testar_inserir_remover();
    testar_fila_cheia_vazia();
    testar_consultar_inicio();

    return 0;
}
