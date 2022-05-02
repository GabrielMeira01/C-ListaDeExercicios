#include <stdio.h>
#include <math.h>

/*Exercicio 16*/
int main(void)
{
    float valor = 0;
    float dezPorcento = 0;
    float valorParcela = 0;
    float comissaoAVista = 0;
    float comissaoParcelada = 0;

    fflush(stdin);
    printf("Insira o valor: \n");
    scanf("%f", &valor);

    dezPorcento = valor * 0.1;
    valorParcela = valor / 3;
    comissaoAVista = dezPorcento * 0.05;
    comissaoParcelada = valor * 0.05;

    printf("valor com desconto de 10 por cento encima do produto: %f\n", dezPorcento);
    printf("valor parcelado em 3 vezes sem juros: %f\n", valorParcela);
    printf("comissão produto a vista: %f\n", comissaoAVista);
    printf("comissão produto com desconto: %f\n", comissaoParcelada);
}