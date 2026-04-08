#include <stdio.h>
    int main () {

/*  Declarar variáveis para armazenar a idade, o sexo (M ou F), a altura (ex.: 1.75f) e o peso
(ex.: 72.845) de uma pessoa e, em seguida, imprimir todos esses valores utilizando os especificadores
de formato corretos; */

char sexo;
    printf("Informe seu sexo, M ou F: ");
    scanf(" %c", &sexo);
    printf("O seu sexo e %c\n", sexo);
    
float altura;
    printf("Informe sua altura: ");
    scanf(" %f", &altura);
    printf("Sua altura e %.2f\n", altura);

float peso;
    printf("Informe seu peso, em kg: ");
    scanf(" %f", &peso);
    printf("Seu peso e %.2f\n", peso);

    return 0;
}