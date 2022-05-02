#include <stdio.h>
#include <math.h>

/*Exercicio 12*/
int main(void)
{
     int x = 0;
     int y = 0;
     int z = 0;
     int resultado = 0;

    fflush(stdin);
    printf("Insira um numero: \n");
    scanf("%d", &x);

    fflush(stdin);
    printf("Insira outro numero: \n");
    scanf("%d", &y);

    fflush(stdin);
    printf("Insira mais um numero: \n");
    scanf("%d", &z);

    resultado = ((x - 5) * y) - z;

    printf("Resultado: %d", resultado);
}