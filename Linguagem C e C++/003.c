//tipos de variaveis
#include <stdio.h>

void main ()
{
    printf("\tInteiros");
    printf("\nTamanho do armazenamento para o tipo int: %d", sizeof(int));
    printf("\nTamanho do armazenamento para o tipo short: %d", sizeof(short));
    printf("\nTamanho do armazenamento para o tipo long: %d", sizeof(long));

    printf("\n\tTipos de ponto flutuante");
    printf("\nTamanho do armazenamento para o tipo float: %d", sizeof(float));
    printf("\nTamanho do armazenamento para o tipo double: %d", sizeof(double));
    printf("\nTamanho do armazenamento para o tipo long double: %d", sizeof(long double));
}