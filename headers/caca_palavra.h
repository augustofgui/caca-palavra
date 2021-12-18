#ifndef CACA_PALAVRA_H
#define CACA_PALAVRA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "menu.h"
#include "entrada.h"

#define TEXT 50

typedef struct caca_palavra {
	char *** tabuleiro;
	int tam_l, tam_c;
	int nro_palavras;
	char ** palavras;
	int ** cord_palavras;
} Caca_palavra;

void jogo();
void inicia_novo_jogo();
int le_dicionario();
Caca_palavra novo_caca_palavra(int tam_l, int tam_c, int nro_palavras);
#endif //CACA-PALAVRA_H