#include <stdio.h>
#define PI 3.14159265
int main () {

    /* Definir a constante PI (3.14159265) utilizando #define e o número de Euler (2.71828182)
    utilizando const. Em seguida, imprimir os valores dessas constantes. Tente alterar o valor da 
    constante declarada com const para observar o erro gerado pelo compilador; */
    
    const float E = 2.71828182;

        printf("O valor de PI e %.8f\n", PI);
        printf("O valor de Euler e %.8f\n", E);

        return 0;
    }