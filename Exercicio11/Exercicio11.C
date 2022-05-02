#include <stdio.h>
#include <math.h>

/*Exercicio 11*/
int main(void)
{
     int a = 0;
     int b = 0;
     int c = 0;
     int resultado = 0;

    fflush(stdin);
    printf("Insira um numero: \n");
    scanf("%d", &a);

    fflush(stdin);
    printf("Insira outro numero: \n");
    scanf("%d", &b);

    fflush(stdin);
    printf("Insira mais um numero: \n");
    scanf("%d", &c);

    resultado = (a - b) * c;

    printf("Resultado: %d", resultado);
}