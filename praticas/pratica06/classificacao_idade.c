#include <stdio.h>
int main () {

int idade = 0;

printf("Digite a sua idade: ");
scanf("%i", &idade);

int crianca = idade <= 12;
int adolescente = idade >= 13 && idade <= 17;
int adulto = idade >= 18 && idade <= 64;
int idoso = idade >= 65;

if (crianca) {
    printf("Com %i anos voce e crianca\n", idade);
} else if (adolescente) {
    printf("Com %i anos voce e adolescente\n", idade); 
} else if (adulto) {
    printf("Com %i anos voce e adulto\n", idade);
} else if (idoso) {
    printf("Com %i anos voce e idoso\n", idade);
}

    return 0;
}