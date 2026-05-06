#include <stdio.h>
int main () {
    int idade = 0;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);

    int e_maior_que_16_anos = idade >= 16;
    
    if (e_maior_que_16_anos) {
       // printf("Com %i anos, voce pode votar!\n", idade);
    } else {
       // printf("Com %i anos, voce nao pode votar!\n", idade);
    }
    

    int e_maior_que_18_anos = idade >= 18;
    int eh_menor_que_70_anos = idade < 70;
    
    if (e_maior_que_18_anos && eh_menor_que_70_anos) {
       // printf("Com essa idade voce TEM que votar!\n", idade);
    } else {
       // printf("Com essa idade voce nao e obrigado a votar!\n", idade);
    }


    int e_menor_que_16_anos = idade < 16;
    int e_menor_que_18_anos = !e_maior_que_18_anos;
    int e_menor_que_70_anos = idade < 70;
    
    if (e_menor_que_16_anos) {
        printf("Com %i anos voce nao pode votar!\n", idade);
    } else if (e_maior_que_16_anos && e_menor_que_18_anos) {
        printf("Com %i anos pode votar!\n", idade);
    } else if (e_maior_que_18_anos && e_menor_que_70_anos) {
        printf("Com %i anos voce tem que votar!\n", idade);
    } else {
        printf("Com %i anos pode votar!\n", idade);
    }


    return 0;
}