#include <stdio.h>

/*Exercicio 1*/
int main(void)
{
    int valor1 = 0;
    int valor2 = 0;

    fflush(stdin);
    printf("Insira um valor: \n");
    scanf("%d", &valor1);

    fflush(stdin);
    printf("Insira outro valor: \n");
    scanf("%d", &valor2);

    printf("valor recebido: %d %d\n", valor1, valor2);
    printf("valor trocado: %d %d\n", valor2, valor1);
}