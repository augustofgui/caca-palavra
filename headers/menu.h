#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define ANSI_BOLD "\x1b[1m"
#define ANSI_COLOR_RED "\e[1;91m"
#define ANSI_COLOR_YELLOW "\e[1;93m"
#define ANSI_RESET "\x1b[0m"
#define ANSI_COLOR_BLUE "\e[1;94m"
#define ANSI_COLOR_GREEN "\e[1;92m"

void menu_inicial_print();
void erro_print(char * erro_str);
void instrucao_print();
void novo_jogo_print();

#endif//MENU_H 