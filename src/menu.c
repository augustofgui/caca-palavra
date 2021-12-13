#include "../headers/menu.h"

void menu_inicial_print()
{
	printf(ANSI_COLOR_BLUE "Bem vindo ao " ANSI_COLOR_YELLOW "Caça Palavras do Gutão!!\n" ANSI_RESET);
	printf("Escolha uma das opções abaixo:\n" ANSI_RESET);
	printf("\n");
	printf(ANSI_COLOR_GREEN ANSI_BOLD "1." ANSI_RESET ANSI_COLOR_YELLOW ANSI_BOLD " Começar" ANSI_RESET " um novo jogo\n" ANSI_RESET);
	printf(ANSI_COLOR_GREEN ANSI_BOLD "2." ANSI_RESET ANSI_COLOR_YELLOW ANSI_BOLD " Continuar" ANSI_RESET " um novo jogo\n" ANSI_RESET);
	printf(ANSI_COLOR_GREEN ANSI_BOLD "3." ANSI_RESET ANSI_COLOR_YELLOW ANSI_BOLD " Instrução" ANSI_RESET " do jogo\n" ANSI_RESET);
	printf("\n");
	printf("Digite " ANSI_BOLD ANSI_COLOR_RED "sair" ANSI_RESET " a qualquer momento para sair do jogo\n" ANSI_RESET);
}

void erro_print(char *erro_str)
{
	printf(ANSI_BOLD ANSI_COLOR_RED "Erro: %s!!\n" ANSI_RESET, erro_str);
}

void instrucao_print()
{
	printf(ANSI_BOLD ANSI_COLOR_BLUE "Lista de possíveis comandos:\n" ANSI_RESET);
	printf(ANSI_BOLD ANSI_COLOR_RED "marcar" ANSI_RESET ": para marcar uma palavra encontrada. O usuário deve digitar, logo após o comando,\n");
	printf("as coordenadas de início e fim da palavra, respectivamente. Exemplo: marcar CD CJ\n");
	printf("indica que a palavra começa na linha C, coluna D e termina na linha C, coluna J\n\n");

	printf(ANSI_BOLD ANSI_COLOR_RED "salvar" ANSI_RESET ": para armazenar em um arquivo o jogo em seu estado atual. O usuário deve digitar\n");
	printf("o nome do arquivo logo após o comando. Exemplo: “salvar jogo.txt” salva o jogo\n");
	printf("no arquivo “jogo.txt”.\n\n");

	printf(ANSI_BOLD ANSI_COLOR_RED "resolver" ANSI_RESET ": exibe a matriz resolvida com as palavras em destaque e finaliza o jogo.\n\n");

	printf(ANSI_BOLD ANSI_COLOR_RED "sair" ANSI_RESET ": encerra o programa, abandonando o jogo (sem salvar as alterações).\n\n");
}

void novo_jogo_print()
{
	printf(ANSI_COLOR_GREEN "NOVO JOGO\n" ANSI_RESET);
	printf(ANSI_RESET "Qual o " ANSI_COLOR_YELLOW ANSI_BOLD "caminho" ANSI_RESET " do arquivo de dicionário: " ANSI_COLOR_BLUE);
}