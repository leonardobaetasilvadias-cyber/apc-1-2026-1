#include <stdio.h>

int main () {

    int idade;
    
    printf("Entre com a sua idade: ");
    scanf("%i", &idade);
    while (getchar() != '\n');

    printf("Voce e menor de idade? %i\n", idade < 18); // menor
    printf("Voce tem 15 anos? %i\n", idade == 15);     // é igual
    printf("Voce nao tem 15 anos? %i\n", idade != 15); // diferente
    printf("Voce e um idoso? %i\n", idade > 59);       // maior

    return 0;
}