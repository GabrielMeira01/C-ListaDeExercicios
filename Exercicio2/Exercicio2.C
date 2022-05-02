#include <stdio.h>

/*Exercicio 2*/
int main(void)
{
    int valor1 = 0;
    int valor2 = 0;
    int soma = 0;
    int subtracao = 0;

    fflush(stdin);
    printf("Insira um valor: \n");
    scanf("%d", &valor1);

    fflush(stdin);
    printf("Insira outro valor: \n");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    subtracao = valor1 - valor2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
}