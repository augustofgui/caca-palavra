#include "../headers/caca_palavra.h"

void jogo()
{      
    int resposta;
    char entrada_str[TEXT];

    menu_inicial_print();

    do
    {
        printf("Escolha a opção: " ANSI_COLOR_BLUE);
        fgets(entrada_str, TEXT - 1, stdin);
        resposta = verifica_entrada(entrada_str);
        switch (resposta)
        {
        case -1:
            erro_print("Resposta inválida");
            break;
        case 1:
            inicia_novo_jogo();
            break;
        case 2:
            //continua_jogo();
            break;
        case 3:
            instrucao_print();
            break;
        }
    } while (resposta == Erro);
}

int le_dicionario(FILE * arq_dicionario)
{   
    int linhas, colunas;
    int nro_palavras;

    fscanf(arq_dicionario, "%d %d", &linhas, &colunas);
    fscanf(arq_dicionario, "%d", &nro_palavras);

}

Caca_palavra novo_tabuleiro(int tam_l, int tam_c)
{
    novo_tabuleiro();
}

void inicia_novo_jogo()
{
    char entrada_str[TEXT];
    FILE * arq_dicionario;

    novo_jogo_print();
    fgets(entrada_str, TEXT - 1, stdin);

    if ((arq_dicionario = fopen(entrada_str, "r")) == NULL) {
        return erro_print("Arquivo não existe");
    }
    
}