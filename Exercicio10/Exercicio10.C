#include <stdio.h>
#include <math.h>

/*Exercicio 10*/
int main(void)
{
    float numero = 0;
    float resultado = 0;

    fflush(stdin);
    printf("Insira o numero: \n");
    scanf("%f", &numero);

    if(numero < ((int) numero + 0.5))
        resultado = floor(numero);
    else
        resultado = ceil(numero);

    printf("resultado: %f", resultado);
}