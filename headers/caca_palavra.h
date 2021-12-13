#ifndef CACA_PALAVRA_H
#define CACA_PALAVRA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "entrada.h"

#define TEXT 50


typedef struct letra {
	char valor;
	char cor[TEXT];
} Letra;

typedef struct palavra {
	char * id;
	int cord_l, cord_c;
} Palavra;

typedef struct caca_palavra {
	Letra ** tabuleiro;
	int tam_l, tam_c;
    int nro_palavras;
    Palavra * palavras;
} Caca_palavra;

void jogo();
void inicia_novo_jogo();
int le_dicionario();

#endif //CACA-PALAVRA_H