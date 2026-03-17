#include <stdio.h>

int busca(int Vetor[10], int ValorBuscado)
{
    int Comeco, Final, meio;

    Comeco = 0;
    Final = 9;

    while (Comeco <= Final)
    {
        meio = (Comeco + Final) / 2;

        if (Vetor[meio] == ValorBuscado)
            return meio;
        else if (ValorBuscado < Vetor[meio])
            Final = meio - 1;
        else
            Comeco = meio + 1;
    }

    return -1;
}

int main(void)
{
    int Vetor[10] = {2, 5, 8, 12, 16, 21, 27, 33, 40, 50};
    int ValorBuscado;
    int resultado;

    printf("Digite o valor a buscar: ");
    scanf("%d", &ValorBuscado);

    resultado = busca(Vetor, ValorBuscado);

    if (resultado == -1)
        printf("Valor nao encontrado.\n");
    else
        printf("Valor encontrado na posicao %d.\n", resultado);

    return 0;
}