#include <stdio.h>
int main () {
    int numeros[10]; //cria um conjunto de 10 inteiros
    //   0 1 2 3 4 5 6 7 8 9
    //  | | | | | | | | | | |

    numeros[0] = 10; // |10| | | | | | | | | |
    numeros[1] = 6; //  |10|6| | | | | | | | |
    numeros[2] = 7; //  |10|6|7| | | | | | | | 
    numeros[3] = 0; //  |10|6|7|0| | | | | | | 
    numeros[4] = 5; //  |10|6|7|0|5| | | | | |   
    numeros[5] = 3; //  |10|6|7|0|5|3| | | | |  
    numeros[6] = 2; //  |10|6|7|0|5|3|2| | | |  
    numeros[7] = 1; //  |10|6|7|0|5|3|2|1| | | 
    numeros[8] = 8; //  |10|6|7|0|5|3|2|1|8| | 
    numeros[9] = 9; //  |10|6|7|0|5|3|2|1|8|9| 

    for(int i=0; i < 10; i++){
        printf("%i, ", numeros[i]);
    }
printf("\n");


    char nome[100]; // cria um conjunto de 100 caracteres
    // sabor string
    printf("Entre com seu nome: ");
    scanf("%[^\n]s", nome);
    printf("Ola %s!\n", nome);


    float notas[3]; // cria um conjunto de 3 flutuantes Leonardo
    printf("Entre com as suas notas do boletim: ");
    for(int i = 0; i < 3; i++){
        printf("A%i = ", i+1);
        scanf("%f", &notas[i]);
    }
    printf("Suas notas foram: ");
    for(int i = 0; i < 3; i++){
        printf("A%i = %.1f\n", i+1, notas[i]);
    }
    return 0;
}