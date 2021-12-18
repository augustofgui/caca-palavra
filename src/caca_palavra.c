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
    int i;

    fscanf(arq_dicionario, "%d %d", &linhas, &colunas);
    fscanf(arq_dicionario, "%d", &nro_palavras);

    Caca_palavra jogo = novo_caca_palavra(linhas, colunas, nro_palavras);

    jogo.nro_palavras = nro_palavras;

    for(i = 0; i < nro_palavras; i++)
    {
        fscanf(arq_dicionario, "%s", jogo.palavras[i]);
    }
    
    
}

Caca_palavra novo_caca_palavra(int tam_l, int tam_c, int nro_palavras)
{
    int i, j;
    Caca_palavra novo;
    char rand_char;

    novo.tam_l = tam_l;    
    novo.tam_c = tam_c;    

    novo.tabuleiro = (char***) calloc(tam_l, sizeof(char**));
    for(i = 0; i < tam_l; i++)
        novo.tabuleiro[i] = (char**) calloc(tam_c, sizeof(char*));
    
    for(i = 0; i < tam_l; i++) {
        for(j = 0; j < tam_c; j++) {

            novo.tabuleiro[i][j] = (char*) calloc(2, sizeof(char));
            novo.tabuleiro[i][j][0] = (char) (rand() % 26) + 'A';
            novo.tabuleiro[i][j][1] = 'B';

            printf(" %c:%c |", novo.tabuleiro[i][j][0], novo.tabuleiro[i][j][1]);
        }
        printf("\n");
    }

    novo.nro_palavras = nro_palavras;

    novo.palavras = (char**) calloc(nro_palavras, sizeof(char*));
    for(i = 0; i < nro_palavras; i++)
        strcpy(novo.palavras[i], "new");
    
    novo.cord_palavras = (int**) calloc(nro_palavras, sizeof(int*));
    for(i = 0; i < nro_palavras; i++){
        novo.cord_palavras[i] = (int*) calloc(2, sizeof(int));
        novo.cord_palavras[i][0] = -1;
        novo.cord_palavras[i][1] = -1;
        printf("%d:%d\n", novo.cord_palavras[i][0], novo.cord_palavras[i][1]);
    }
    



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

    le_dicionario(arq_dicionario);
    
}