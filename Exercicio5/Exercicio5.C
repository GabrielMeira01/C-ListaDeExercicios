#include <stdio.h>

/*Exercicio 5*/
int main(void)
{
    float perimetro1 = 0;
    float perimetro2 = 0;
    float resultado = 0;

    fflush(stdin);
    printf("Insira o primeiro valor: \n");
    scanf("%f", &perimetro1);

    fflush(stdin);
    printf("Insira o segundo valor: \n");
    scanf("%f", &perimetro2);

    resultado = perimetro1 + perimetro1 + perimetro2 + perimetro2;
    printf("A área do perímetro é: %f\n", resultado);
}