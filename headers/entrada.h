#ifndef ENTRADA_H
#define ENTRADA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ASCII_ZERO 48

enum dificuldades {Facil=1, Medio, Dificil};
enum entradas {Erro=-1, Saida=0, Marcar, Salvar, Resolver};

int verifica_entrada(char * entrada_str);

#endif//ENTRADA_H 