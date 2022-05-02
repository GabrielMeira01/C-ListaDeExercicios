#include <stdio.h>
#include <math.h>

/*Exercicio 15*/
int main(void)
{
    float gasolina = 2.60;
    int distanciaPraia = 520;
    float calculo = 0;

    calculo = (gasolina / 12) * distanciaPraia;

    printf("total de litros gastos: %f", calculo);
}