#include <stdio.h>
#include <math.h>

/*Exercicio 8*/
int main(void)
{
    float area1 = 0;
    float pi = 2 * acos(0.0f);
    float resultado = 0;
    
    fflush(stdin);
    printf("Insira o valor: \n");
    scanf("%f", &area1);


    resultado = pi * pow(area1, 2);

    printf("A área do perímetro é: %f\n", resultado);
}