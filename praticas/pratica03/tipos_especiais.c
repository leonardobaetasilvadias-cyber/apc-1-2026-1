#include <stdio.h>
    int main () {

    /*Declarar variáveis para armazenar o número de países (195), o número de idiomas (7100), 
    a população mundial (8274065924) e a proporção áurea (1.61803398874989484820) e, em seguida, 
    imprimir esses valores utilizando os especificadores de formato corretos.*/
    int paises = 195;
    int idiomas = 7100;
    long long populacao_mundial = 8274065924;
    long double proporcao_aurea = 1.61803398874989484820;
    
    printf("%i\n", paises);
    printf("%i\n", idiomas);
    printf("%lld\n", populacao_mundial);
    printf("%Lf\n", proporcao_aurea);

        return 0;
    }