#include <stdio.h>
    int main() {

    int numero_menu = 0;
    
    printf("=====Menu do Jogo=====\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuação\n");
    printf("4 - Sair\n");
    printf("======================\n");
    printf("Escolha uma opção: \n");

    scanf("%i", &numero_menu);

    switch(numero_menu){
    case 1: printf("Iniciando novo jogo.\n");
     break;
    case 2: printf("Abrindo salvamento...\n");
     break;
    case 3: printf("Exibindo pontuacao:\n");
     break;
    case 4: printf("Saindo do jogo.\n");
     break;
    default: printf("Invalido, tente novamente!\n");
    }

    return 0;
}