#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "../headers/caca_palavra.h"

int main(int argc, char ** argv){
	setlocale(LC_ALL, "Portuguese");
	
	jogo();

	return 0;
}