#include <stdio.h>
#include <math.h>

/*Exercicio 9*/
int main(void)
{
    float raio = 0;
    float pi = 2 * acos(0.0f);
    float resultado = 0;
    
    fflush(stdin);
    printf("Insira o valor: \n");
    scanf("%f", &raio);

    resultado = (2 * raio) * pi;
    printf("O raio da circunferencia é: %f", resultado);
}