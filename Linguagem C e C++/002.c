//primeiro programa com variaveis
#include <stdio.h>

void main ()
{
    int numero1, numero2, soma;

    printf("\nDigite um numero: ");//imprime uma mensagem 
    scanf("%d", &numero1);//ler o valor digitado e armazena em uma variavel(tipo da variavel, onde armazenar)
    
    printf("\nDigite outro numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    printf("\nA soma de %d + %d = %d", numero1, numero2, soma);
}