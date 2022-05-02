#include <stdio.h>
#include <math.h>

/*Exercicio 7*/
int main(void)
{
    float perimetro1 = 0;
    float perimetro2 = 0;
    float calculo1 = 0;
    float calculo2 = 0;
    float resultado = 0;

    fflush(stdin);
    printf("Insira o primeiro valor: \n");
    scanf("%f", &perimetro1);

    fflush(stdin);
    printf("Insira o segundo valor: \n");
    scanf("%f", &perimetro2);

    calculo1 = perimetro1 * perimetro1;
    calculo2 = perimetro2 * perimetro2;
    resultado = sqrt(calculo1 + calculo2);

    printf("A área do perímetro é: %f\n", resultado);
}