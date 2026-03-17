#include <stdio.h>

int main(void)
{
    int M[3][4], linha, coluna, conteudo;

    conteudo = 0;

    /* Preenchimento da matriz */
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            conteudo = conteudo + 1;
            M[linha][coluna] = conteudo;
        }
    }

    /* Reorganizacao (espelhamento) */
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            conteudo = M[2 - linha][3 - coluna];
            M[linha][coluna] = conteudo;
        }
    }

    /* Exibicao da matriz final */
    printf("Matriz final:\n");
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            printf("%d\t", M[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}