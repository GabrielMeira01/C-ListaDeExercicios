#include <stdio.h>

/*Exercicio 3*/
int main(void)
{
    int resultado = 0;
    
    for(int j = 0; j < 20; j++)
    {
        for(int o = 0; o < 1; o++)
        {
            resultado = 1;
            printf("%d, ", resultado);

            for(int i = 0; i > -1; i--)
            {
                resultado = - 1;
                printf("%d, ", resultado);
            }
        }
    }
}