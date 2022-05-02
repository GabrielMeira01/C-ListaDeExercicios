#include <stdio.h>
#include <stdlib.h>

/*Exercicio 17*/
int main(void) {
    int valor, horas, minutos, segundos, resto;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    horas = valor / 3600;
    resto = valor % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("Valor convertido em segundos: ");
    printf("horas: %d\n", horas);
    printf("minutos: %d\n", minutos);
    printf("segundos: %d\n", segundos);
    printf("Conversão em horas: %d:%d:%d", horas, minutos, segundos);
}