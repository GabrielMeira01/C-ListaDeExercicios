#include <stdio.h>
#include <math.h>

/*Exercicio 13*/
int main(void)
{
    float nota1 = 0;
    float peso1 = 0;
    float nota2 = 0;
    float peso2 = 0;
    float resultado = 0;

    fflush(stdin);
    printf("Insira uma nota: \n");
    scanf("%f", &nota1);

    fflush(stdin);
    printf("Insira o primeiro peso: \n");
    scanf("%f", &peso1);

    fflush(stdin);
    printf("Insira outra nota: \n");
    scanf("%f", &nota2);

    fflush(stdin);
    printf("Insira o segundo peso: \n");
    scanf("%f", &peso2);

    resultado = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);

    printf("Resultado: %f", resultado);
}