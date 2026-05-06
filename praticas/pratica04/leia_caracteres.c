#include <stdio.h>
int main () {

char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Voce pressionou o caractere: %c\n", c);
    printf("Codigo ASCII %i\n", c);

    return 0;
}