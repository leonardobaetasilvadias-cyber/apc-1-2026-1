#include <stdio.h>
int main () {

    int dia;
    printf("Digite um numero de 1 a 7: ");
    scanf("%i", &dia);

    switch (dia) {
        case 1: printf("Domingo - Final de semana\n"); break;
        case 2: printf("Segunda-feira - Dia util\n"); break;
        case 3: printf("Terca-feira - Dia util\n"); break;
        case 4: printf("Quarta-feira - Dia util\n"); break;
        case 5: printf("Quinta-feira - Dia util\n"); break;
        case 6: printf("Sexta-feira - Dia util\n"); break;
        case 7: printf("Sabado - Final de semana\n"); break; 
        default: printf("Numero invalido, tente novamente.\n");
    }

    return 0;
}