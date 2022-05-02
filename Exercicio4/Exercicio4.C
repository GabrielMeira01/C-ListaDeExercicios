#include <stdio.h>

/*Exercicio 4*/
int main(void)
{
    int area1 = 0;
    int area2 = 0;
    int resultado = 0;

    fflush(stdin);
    printf("Insira o primeiro valor: \n");
    scanf("%d", &area1);

    fflush(stdin);
    printf("Insira o segundo valor: \n");
    scanf("%d", &area2);

    resultado = area1 * area2;
    printf("A área do quadrado é: %d\n", resultado);
}