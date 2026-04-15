#include <stdio.h>

int main() {

    int idade;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);
    while (getchar() != '\n');

    // && => 0 False E qualquer coisa = Sempre falso
    printf("Voce e uma crinça? %i\n", idade >= 0 && idade <= 12);

    //  || => 1 Verdadeiro ou qualquer coisa = Sempre Verdadeiro
    printf("Voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);

    // ! => Não verdadeiro = Falso, Não falso = Verdadeiro
    printf("Voce nao pode votar? %i\n", !(idade >= 16));


    return 0;
}