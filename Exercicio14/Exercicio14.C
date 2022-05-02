#include <stdio.h>
#include <math.h>

/*Exercicio 14*/
int main(void)
{
    float fahrenheit = 0;
    float resultado = 0;

    fflush(stdin);
    printf("Insira fahrenheit: \n");
    scanf("%f", &fahrenheit);

    resultado = (fahrenheit - 32) * 5 / 9;

    printf(" Celsius: %f", resultado);
}