#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Solicite o valor inicial ao usuário
    int nInicial, nFinal;
    int nasc, mort, years, n;
    do
    {
        nInicial = get_int("Insert the starting population number: ");
    }
    while (nInicial < 9);
    // TODO: Solicite o valor final ao usuário
    do
    {
        nFinal = get_int("Insert the ending population number: ");
    }
    while (nFinal < nInicial);
    // TODO: Calcule o número de anos até o limite
    years = 0;
    if (nFinal != nInicial)
    {
        do
        {
            nasc = nInicial / 3;
            mort = nInicial / 4;
            years++;
            nInicial = nInicial + nasc - mort;
        }
        while (nInicial < nFinal);
        printf("Years: %i\n", years);
    }
    else
    {
        printf("Years: 0\n");
    }
}