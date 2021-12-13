#include "../headers/entrada.h"

int verifica_entrada(char *entrada_str)
{

    if (strcmp(entrada_str, "sair") == 0)
        return Saida;

    if (strncmp(entrada_str, "marcar", strlen("marcar")) == 0)
        return Marcar;

    if (strncmp(entrada_str, "salvar", strlen("Salvar")) == 0)
        return Salvar;

    if (strncmp(entrada_str, "resolver", strlen("Resolver")) == 0)
        return Resolver;

    if(strlen(entrada_str) > 2)
        return Erro;
        
    switch (entrada_str[0])
    {
    case '1':
    case '2':
    case '3':
        return entrada_str[0] - ASCII_ZERO;
        break;
        
    default:
        return Erro;
    }

    return Erro;
}